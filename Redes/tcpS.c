#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define QLEN 5
#define MAX_SIZE 80

int atende_cliente(int descritor, struct sockaddr_in endCli) {
    char buffer[MAX_SIZE];
    int n;

    while (1) {
        memset(&buffer, 0, sizeof(buffer));
        n = recv(descritor, &buffer, sizeof(buffer), 0);
        if (n <= 0)
            break;
        if (strncmp(buffer, "FIM", 3) == 0)
            break;
        printf("[%s:%u] => %s", inet_ntoa(endCli.sin_addr), ntohs(endCli.sin_port), buffer);
        send(descritor, buffer, strlen(buffer), 0);
    }

    printf("Encerrando a conexão com %s:%u ...\n\n", inet_ntoa(endCli.sin_addr), ntohs(endCli.sin_port));
    close(descritor);
    return 0;
}

int main(int argc, char *argv[]) {
    struct sockaddr_in serverAddress;
    struct sockaddr_in clientAddress;
    int serverSocket;
    int clientSocket;
    int addrLength;
    int pid;

    if (argc < 3) {
        printf("Digite IP e Porta para este servidor\n");
        exit(1);
    }

    memset((char *)&serverAddress, 0, sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr(argv[1]);
    serverAddress.sin_port = htons(atoi(argv[2]));

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        fprintf(stderr, "Falha ao criar socket!\n");
        exit(1);
    }

    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        fprintf(stderr, "Ligacao falhou!\n");
        exit(1);
    }

    if (listen(serverSocket, QLEN) < 0) {
        fprintf(stderr, "Falhou ouvindo porta!\n");
        exit(1);
    }

    printf("Servidor ouvindo no IP %s, na porta %s ...\n\n", argv[1], argv[2]);

    while (1) {
        addrLength = sizeof(clientAddress);
        clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, (socklen_t *)&addrLength);

        if (clientSocket < 0) {
            fprintf(stdout, "Falha na conexao\n");
            exit(1);
        }

        printf("Cliente %s: %u conectado.\n", inet_ntoa(clientAddress.sin_addr), ntohs(clientAddress.sin_port));

        if ((pid = fork()) == 0) {
            close(serverSocket);
            atende_cliente(clientSocket, clientAddress);
            exit(0);
        } else if (pid < 0) {
            fprintf(stderr, "Falha na criação do processo filho\n");
            exit(1);
        }

        close(clientSocket);
    }

    return 0;
}


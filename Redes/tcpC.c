#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_SIZE 80

int main(int argc, char *argv[]) {
    struct sockaddr_in serverAddress;
    int clientSocket;
    char buffer[MAX_SIZE] = {0};

    if (argc < 3) {
        printf("Uso correto: %s <ip_do_servidor> <porta_do_servidor>\n", argv[0]);
        exit(1);
    }

    memset((char *)&serverAddress, 0, sizeof(serverAddress));
    memset((char *)&buffer, 0, sizeof(buffer));

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr(argv[1]);
    serverAddress.sin_port = htons(atoi(argv[2]));

    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        fprintf(stderr, "Falha ao criar socket!\n");
        exit(1);
    }

    if (connect(clientSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        fprintf(stderr, "Tentativa de conexao falhou!\n");
        exit(1);
    }

    printf("Conectado ao servidor. Digite 'FIM' para encerrar.\n");

    fd_set readfds;
    int max_fd;

    while (1) {
        FD_ZERO(&readfds);
        FD_SET(STDIN_FILENO, &readfds);
        FD_SET(clientSocket, &readfds);
        max_fd = (STDIN_FILENO > clientSocket) ? STDIN_FILENO : clientSocket;

        if (select(max_fd + 1, &readfds, NULL, NULL, NULL) < 0) {
            fprintf(stderr, "Erro na chamada select()\n");
            exit(1);
        }

        if (FD_ISSET(STDIN_FILENO, &readfds)) {
            fgets(buffer, MAX_SIZE, stdin);
            send(clientSocket, buffer, strlen(buffer), 0);
            if (strncmp(buffer, "FIM", 3) == 0)
                break;
        }

        if (FD_ISSET(clientSocket, &readfds)) {
            memset(buffer, 0, sizeof(buffer));
            int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);
            if (bytesRead <= 0)
                break;
            printf("Mensagem recebida do servidor: %s", buffer);
        }
    }

    printf("Encerrando a conexão.\n");
    close(clientSocket);
    return 0;
}

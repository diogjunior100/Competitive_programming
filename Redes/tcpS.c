#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define MAX_BUFFER_SIZE 1024

int clientSocket;
pthread_t receiveThread;

void *receiveData(void *arg) {
    char buffer[MAX_BUFFER_SIZE] = {0};
    int bytesRead;

    while (1) {
        bytesRead = recv(clientSocket, buffer, MAX_BUFFER_SIZE, 0);
        if (bytesRead <= 0)
            break;

        printf("Mensagem recebida do cliente: %s\n", buffer);
        memset(buffer, 0, MAX_BUFFER_SIZE);
    }

    return NULL;
}

int main() {
    int serverSocket;
    struct sockaddr_in serverAddress, clientAddress;
    socklen_t clientAddrLen = sizeof(clientAddress);

    // Criação do socket do servidor
    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Erro ao criar o socket");
        exit(EXIT_FAILURE);
    }

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(PORT);

    // Vinculação do socket a um endereço e número de porta
    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        perror("Erro na vinculação do socket");
        exit(EXIT_FAILURE);
    }

    // Aguarda por conexões
    if (listen(serverSocket, 3) < 0) {
        perror("Erro ao aguardar por conexões");
        exit(EXIT_FAILURE);
    }

    printf("Aguardando por conexões...\n");

    // Aceitação de uma nova conexão
    if ((clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, &clientAddrLen)) < 0) {
        perror("Erro na aceitação de conexão");
        exit(EXIT_FAILURE);
    }

    printf("Conexão estabelecida com o cliente\n");

    // Criação de thread para receber dados do cliente
    if (pthread_create(&receiveThread, NULL, receiveData, NULL) != 0) {
        perror("Erro na criação da thread");
        exit(EXIT_FAILURE);
    }

    // Envio de dados para o cliente
    char *message = "Olá do servidor!";
    send(clientSocket, message, strlen(message), 0);

    // Loop para enviar dados para o cliente
    while (1) {
        char buffer[MAX_BUFFER_SIZE];
        fgets(buffer, MAX_BUFFER_SIZE, stdin);

        send(clientSocket, buffer, strlen(buffer), 0);
    }

    return 0;
}

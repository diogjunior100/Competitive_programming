#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>

#define SERVER_IP "127.0.0.1"
#define PORT 8080
#define MAX_BUFFER_SIZE 1024

int serverSocket;
pthread_t receiveThread;

void *receiveData(void *arg) {
    char buffer[MAX_BUFFER_SIZE] = {0};
    int bytesRead;

    while (1) {
        bytesRead = recv(serverSocket, buffer, MAX_BUFFER_SIZE, 0);
        if (bytesRead <= 0)
            break;

        printf("Mensagem recebida do servidor: %s\n", buffer);
        memset(buffer, 0, MAX_BUFFER_SIZE);
    }

    return NULL;
}

int main() {
    struct sockaddr_in serverAddress;

    // Criação do socket do cliente
    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Erro ao criar o socket do cliente");
        exit(EXIT_FAILURE);
    }

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(PORT);

    // Conversão do endereço IP
    if (inet_pton(AF_INET, SERVER_IP, &(serverAddress.sin_addr)) <= 0) {
        perror("Endereço inválido ou não suportado");
        exit(EXIT_FAILURE);
    }

    // Conexão com o servidor
    if (connect(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        perror("Erro na conexão com o servidor");
        exit(EXIT_FAILURE);
    }

    printf("Conexão estabelecida com o servidor\n");

    // Criação de thread para receber dados do servidor
    if (pthread_create(&receiveThread, NULL, receiveData, NULL) != 0) {
        perror("Erro na criação da thread");
        exit(EXIT_FAILURE);
    }

    // Loop para enviar dados para o servidor
    while (1) {
        char buffer[MAX_BUFFER_SIZE];
        fgets(buffer, MAX_BUFFER_SIZE, stdin);

        send(serverSocket, buffer, strlen(buffer), 0);
    }

    return 0;
}

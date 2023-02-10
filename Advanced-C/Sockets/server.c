#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

short socketCreate(void)
{
    short hSocket = 0;
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM, 0);

    return hSocket;
}

int bindCreatedSocket(int hSocket)
{
    int iRetval = -1;
    int clientPort = 12345;

    struct sockaddr_in remote = {0};

    // Internet Address Family
    remote.sin_family = AF_INET;
    // Incoming Interfaces
    remote.sin_addr.s_addr = htonl(INADDR_ANY);
    remote.sin_port = htons(clientPort);

    iRetval = bind(hSocket, (struct sockaddr *)&remote, sizeof(remote));
    return iRetval;
}

int main(int argc, char const *argv[])
{
    int socket_desc = 0, sock = 0, clientLen = 0;
    struct sockaddr_in client;
    char client_message[200] = {0};
    char message[100] = {0};
    const char *pMessage = "Hello from Keeshi's server";

    // Create Socket
    socket_desc = socketCreate();

    if (socket_desc == -1)
    {
        perror("Could not create socket!");
        return 1;
    }

    // Bind Socket
    if (bindCreatedSocket(socket_desc) < 0)
    {
        perror("Bind Failed.");
        return 1;
    }

    printf("Bind is done\n");

    // Listen, 3 clients
    listen(socket_desc, 3);

    // Accept Incoming Connections
    while (1)
    {
        printf("Waiting for incoming connections...\n");
        clientLen = sizeof(struct sockaddr_in);

        // Accept Connection from an incoming client
        sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t *)&clientLen);

        if (sock < 0)
        {
            perror("Accept Failed.");
            return 1;
        }

        printf("Connection Accepted\n");
        memset(client_message, '\0', sizeof(client_message));
        memset(message, '\0', sizeof(message));

        if (recv(sock, client_message, 200, 0) < 0)
        {
            perror("recv failed");
            return 1;
            // break;
        }

        printf("Client reply : %s\n", client_message);

        if (strncmp(pMessage, client_message, 5) == 0)
        {
            strcpy(message, "Hi there!");
        }
        else
        {
            strcpy(message, "Invalid message!");
        }

        // Send some data
        if (send(sock, message, strlen(message), 0) < 0)
        {
            perror("Send Failed");
            return 1;
        }

        close(sock);
        sleep(1);
    }

    return 0;
}

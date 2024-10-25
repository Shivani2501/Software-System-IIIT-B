/*Name : 33b.c
Author : Shivani Shukla
Description : Write a program to communicate between two machines using socket
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MESSAGE "Hello from client!"

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;

    
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("\n Socket creation error \n");
        return -1;
    }

        serv_addr.sin_family = AF_INET; 
    	serv_addr.sin_port = htons(PORT);   
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }

    
    send(sock, MESSAGE, strlen(MESSAGE), 0);
    printf("Message sent: %s\n", MESSAGE);

    
    close(sock);
    return 0;
}
/* Output
Message sent: Hello from client!
*/

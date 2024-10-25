/*
Name : 22.c
Author : Shivani Shukla
Description : Write a program to wait for data to be written into FIFO within 10 seconds, use select
system call with FIFO.
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>

int main() {
    const char *fifo = "myfifo";
    int fd;
    char buffer[128];
    fd_set readfds;
    struct timeval timeout;

   
    fd = open(fifo, O_RDONLY | O_NONBLOCK);
    if (fd == -1) {
        perror("open");
        return 1;
    }

   
    FD_ZERO(&readfds);
    FD_SET(fd, &readfds);

   
    timeout.tv_sec = 10;
    timeout.tv_usec = 0;

       int retval = select(fd + 1, &readfds, NULL, NULL, &timeout);

    if (retval == -1) {
        perror("select");
        close(fd);
        return 1;
    } else if (retval == 0) {
        printf("No data written to the FIFO within 10 seconds.\n");
    } else {
        if (FD_ISSET(fd, &readfds)) {
            int bytesRead = read(fd, buffer, sizeof(buffer));
            if (bytesRead > 0) {
                printf("Received: %s\n", buffer);
            } else {
                printf("No data to read from FIFO.\n");
            }
        }
    }

       close(fd);
    return 0;
}
/* Output
Received: hello
*/

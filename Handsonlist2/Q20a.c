/*Name : 20.c
Author : Shivani Shukla
Description : Write two programs so that both can communicate by FIFO -Use one way communication.
Date: 21th Sep, 2024.*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    const char *fifo = "myfifo";

        fd = open(fifo, O_WRONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    
    char message[] = "Hello from the writer!";
    write(fd, message, sizeof(message));

    
    close(fd);

    return 0;
}

/* Output
Received: Hello from the writer!
*/

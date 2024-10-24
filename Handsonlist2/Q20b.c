#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    const char *fifo = "myfifo";
    char buffer[128];

    
    fd = open(fifo, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    
    read(fd, buffer, sizeof(buffer));

    
    printf("Received: %s\n", buffer);

    
    close(fd);

    return 0;
}
/* Output is in Q20a.c*/


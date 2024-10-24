#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    const char *fifo_path = "myifo";

        if (mknod(fifo_path, S_IFIFO | 0666, 0) == -1) {
        perror("mknod failed");
        return 1;
    }

    printf("FIFO created successfully with mknod: %s\n", fifo_path);
    return 0;
}
/* Output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ gcc Q16d.c
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
FIFO created successfully with mknod: myifo
*/

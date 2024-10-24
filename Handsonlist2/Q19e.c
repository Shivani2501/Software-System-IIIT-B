#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *fifo_path = "myfi";

    
    if (mkfifo(fifo_path, 0666) == -1) {
        perror("mkfifo failed");
        exit(EXIT_FAILURE);
    }

    printf("FIFO created successfully with mkfi: %s\n", fifo_path);
    return 0;
}
/* Output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ vim Q16e.c
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ gcc Q16e.c
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
FIFO created successfully with mkfi: myfi
*/

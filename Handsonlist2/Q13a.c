#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
void print()
{
    printf("Received SIGSTOP");
}
void main()
{

    __sighandler_t status = signal(SIGSTOP, (void *)print);
    if (status == SIG_ERR)
    {
        perror("Error while assigning signal handler");
    }
    sleep(15);
}

/* Output
[1] 173634
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/Desktop/Handsonlist2$ Error while assigning signal handler: Invalid argument

*/

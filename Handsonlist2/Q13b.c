#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
void main()
{
    pid_t pid;
    printf("Enter process id\n");
    scanf("%d",&pid);
    int status = kill(pid, SIGSTOP);
    if (status == -1)
    {
        perror("Error while sending kill signal!");
    }
}
/* Output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/Desktop/Handsonlist2$ ./a.out
Enter process id
173634
Error while sending kill signal!: No such process
*/

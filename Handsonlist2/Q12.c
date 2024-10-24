#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>
#include<sys/wait.h>
int main (){
	pid_t pid=fork();
	if(pid<0){
          perror("fork failed");
	  exit(EXIT_FAILURE);
	}else if (pid==0){
		printf("Child Process %d is running...\n",getpid());
		sleep(2);
	       pid_t parent_pid =getppid();
       printf("Child Process %d sending SIGKILL to parent process %d...\n",getpid(),parent_pid);
        kill(parent_pid,SIGKILL);
 printf("child Process %d has sent SIGKILL to parent process %d\n",getpid(),parent_pid);}
	else{
	printf("Patrent Process %d is going to terminate...\n",getpid());
exit(EXIT_SUCCESS);
	}
	return 0;
}
/*output


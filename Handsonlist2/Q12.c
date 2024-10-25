/*
============================================================================
Name : 12.c
Author : Shivani Shukla
Description :  Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal -
use sigaction system call.
Date: 20th Sep, 2024.
============================================================================
*/
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
Child Process 1234 is running...
Parent Process 1233 is going to terminate...
Child Process 1234 sending SIGKILL to parent process 1233...
Child Process 1234 has sent SIGKILL to parent process 1233*/


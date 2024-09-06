#include<stdio.h>
#include<stdlib.h>
/*
============================================================================
Name : 26.c
Author :Shivani Sanjiv shukla
Description :Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 31st Aug, 2024.
============================================================================
*/


#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main ( int argc ,char *argv[])
{
	pid_t pid =fork();
  
	if(pid !=0){
		int st;
		waitpid(pid,&st,0);
		if(WIFEXITED(st)){
			printf("Child exit with %d\n",WEXITSTATUS(st));
		}
		else{
			printf("Child did not exit\n");
		}
	}
	return 0;
}
/*
output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ gcc Q26.c
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Child exit with 0
*/

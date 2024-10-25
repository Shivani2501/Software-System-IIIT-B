/*
============================================================================
Name : 14.c
Author : Shivani Shukla
Description :   Write a simple program to send some data from parent to the child process.
Date: 21th Sep, 2024.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main (){
	int pipefds[2];
	pid_t pid;
	char write_msg[]="Hello from pipe!";
	char read_msg[100];

	if(pipe(pipefds)==-1){
		perror("Pipe failed");
		exit(EXIT_FAILURE);
	}
	pid=fork();
	if(pid==-1){
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	if(pid==0){
		close(pipefds[1]);
		read(pipefds[0],read_msg,sizeof(read_msg));
		printf("Child process read: %s\n",read_msg);
		close(pipefds[0]);
	}
else{
	close(pipefds[0]);
	write(pipefds[1],write_msg,strlen(write_msg)+1);
	printf("Parent process wrote: %s\n",write_msg);
	close(pipefds[1]);
	wait(NULL);
}
return 0;
}
/*Output
Parent process wrote: Hello from pipe!
Child process read: Hello from pipe!
*/

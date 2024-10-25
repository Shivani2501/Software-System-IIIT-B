/*
============================================================================
Name : 9.c
Author : Shivani Shukla
Description : Write a program to ignore a SIGINT signal then reset the default action of the SIGINT
signal - Use signal system call.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void reset_sigint(int sig)
{
	printf("\n Resetting the default action for SIGINT%d\n",sig);
	signal(SIGINT,SIG_DFL);
}
int main (){
	signal(SIGINT,SIG_IGN);
	printf("SIGINT signal is being ignored. Try pressing Ctrl+C...\n");
	sleep(5);
	signal(SIGINT,reset_sigint);
	printf("SIGINT will now reset to its default behaviour is 5 sec. Press Ctrl+C...\n)");
	sleep(5);
	printf("SIGINT has been reset to its deafault action.Press Ctrl+C to terminatethe program.\n");
	while(1){
		pause();
	}
	return 0;
}
/*Output
SIGINT signal is being ignored. Try pressing Ctrl+C...
SIGINT will now reset to its default behaviour is 5 sec. Press Ctrl+C...
)SIGINT has been reset to its deafault action.Press Ctrl+C to terminatethe program.
^C
 Resetting the default action for SIGINT2
*/

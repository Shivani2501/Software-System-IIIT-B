#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void reset_sigint(int sig,siginfo_t *info,void* context){
	printf("\n Resetting the default action for SIGINT\n",sig);
	struct sigaction sa;
	sa.sa_flags=0;
	sa.sa_handler=SIG_DFL;
	sigemptyset(&sa.sa_mask);
	if (sigaction(SIGINT,&sa,NULL)==-1){
		perror("sigaction");
		exit(EXIT_FAILURE);
	}
}
int main (){
	struct sigaction sa;
	sa.sa_flags=0;
	sa.sa_handler=SIG_IGN;
	sigemptyset(&sa.sa_mask);
	if(sigaction(SIGINT,&sa,NULL)==-1){
		perror("sigaction ");
		exit(EXIT_FAILURE);
	}
	printf("SIGINT is being ignored. Press Ctrl+C..\n");
	sleep(5);
	printf("Resetting SIGINT to default behaviour in 5 sec..\n");
	sleep(5);
	reset_sigint(0,NULL,NULL);
	printf("SIGINT has been reset to it's default action. PressCtrl+C to terminate the program.\n");
	while(1){
		pause();
	}
	return 0;
}
/*Output
Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal -
use sigaction system call.
*/
	

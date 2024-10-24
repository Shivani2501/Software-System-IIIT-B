#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
 
void handle_sigalrm(int sig){
	printf("Caiaught SIGALARM%d\n",sig);
	exit(EXIT_SUCCESS);
}
int main (){
	signal(SIGALRM, handle_sigalrm);
	alarm(5);
	printf("Alarm is set for 5 sec...\n");
	while(1){
		pause();
	}
	return 0;
}
/* Output
Alarm is set for 5 sec...
Caiaught SIGALARM14
*/

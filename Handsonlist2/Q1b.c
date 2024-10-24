#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/time.h>
#include<unistd.h>
void handle_sig(int sig){
	printf("Received signal%d\n",sig);
}
int main ()
{
	struct itimerval timer;
	signal(SIGVTALRM,handle_sig);

	timer.it_value.tv_sec=10;
	timer.it_value.tv_usec=10;
	timer.it_interval.tv_sec=10;
	timer.it_interval.tv_usec=10;
	if(setitimer(ITIMER_VIRTUAL,&timer,NULL)==-1){
		perror("Error");
		exit(1);
	}
	while(1){
	}
	return 0;
}
/* Output
Received signal26
Received signal26

*/

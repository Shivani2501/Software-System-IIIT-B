#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/time.h>
#include<unistd.h>
void handle_sigvtalrm(int sig){
	printf("Caought SIFVTALRM",sig);
}
int main (){
	struct itimerval timer;
	signal(SIGVTALRM,handle_sigvtalrm);
	timer.it_value.tv_sec =2;
	timer.it_value.tv_usec=0;
	timer.it_interval.tv_sec=1;
	timer.it_interval.tv_usec=0;
	setitimer(ITIMER_VIRTUAL,&timer, NULL);
	printf("virtual timer is set 2 seconds,then repeats every 1 second. Waiting for SIGVTALARM...\n");
	while(1){
		for(volatile int i=0;i<10;++i);
	}return 0;
}
/* Output
virtual timer is set 2 seconds,then repeats every 1 second. Waiting for SIGVTALARM...
  Caought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought SIFVTALRMCaought
  */



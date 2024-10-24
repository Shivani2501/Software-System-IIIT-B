#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/time.h>
#include<unistd.h>
void handle_sigprof(int sig){
	printf("Caught %d\n",sig);
}
int main ()
{
	struct itimerval timer;
	signal(SIGPROF, handle_sigprof);
	timer.it_value.tv_sec=2;
	timer.it_value.tv_usec=0;
	timer.it_interval.tv_sec=1;
	timer.it_interval.tv_usec=0;

	setitimer(ITIMER_PROF,&timer,NULL);
	printf("Profiling timer is set for 2 sec, then repeats every 1 sec.Waiting for SIGPROF...\n");
	while(1){
		for(volatile int i=0;i<1000;++i);
	}
	return 0;
}
/* Output
Profiling timer is set for 2 sec, then repeats every 1 sec.Waiting for SIGPROF...
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
Caught 27
*/

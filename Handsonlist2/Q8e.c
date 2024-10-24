#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/time.h>
#include<unistd.h>

void handle_sigalarm(int sig){
	printf("Caought SiGAlarm %d\n",sig);
}
int main(){
	struct itimerval timer;
	signal(SIGALRM,handle_sigalarm);
	timer.it_value.tv_sec =3;
	timer.it_value.tv_usec=0;
	timer.it_interval.tv_sec=2;
	timer.it_interval.tv_usec=0;
	setitimer(ITIMER_REAL,&timer,NULL);
	printf("timer is set for 3 seconds, then repeats every 2 seconds. waiting for SIGALARM....\n");
	while(1){
		pause();
	}
	return 0;
}
/*output
timer is set for 3 seconds, then repeats every 2 seconds. waiting for SIGALARM....
Caought SiGAlarm 14
Caought SiGAlarm 14
Caought SiGAlarm 14
Caought SiGAlarm 14
Caought SiGAlarm 14
Caought SiGAlarm 14
*/

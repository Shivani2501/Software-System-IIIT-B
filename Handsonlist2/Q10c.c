#include <stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void handle_sigfpe(int sig, siginfo_t *info,void *contaxr){
	printf("Caought SIGFPE %d\n",sig);
	if(info->si_code==FPE_INTDIV){
		printf("Reason: Integer division by zero.\n");
	}else if (info->si_code==FPE_FLTDIV){
		printf("Reason: Floating -point divisionny zero.\n");
	}else{
		printf("Reason: Other floating-point exception.\n");
	}
	exit(EXIT_FAILURE);
}
int main (){
	struct sigaction sa;
	sa.sa_flags=SA_SIGINFO;
	sa.sa_sigaction=handle_sigfpe;
	sigemptyset(&sa.sa_mask);
	if(sigaction(SIGFPE,&sa,NULL)==-1){
		perror("sigaction");
		exit(EXIT_FAILURE);
	}
	printf("SIGFPE handle is set ..\n");
	int a =1;
	int b=0;
	int result =a/b;
	printf("Result: %d\n",result);
	return 0;
}
/* Output
SIGFPE handle is set ..
Caought SIGFPE 8
Reason: Integer division by zero.
*/


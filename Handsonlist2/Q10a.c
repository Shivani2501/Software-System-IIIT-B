#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void handle_sigsegv(int sig, siginfo_t *info,void *context){
	printf("Caought SIGSEGV %d\n",sig);
	printf("Fault address: %p\n",info->si_addr);
	exit(EXIT_FAILURE);
}
int main (){
	struct sigaction sa;
	sa.sa_flags=SA_SIGINFO;
	sa.sa_sigaction=handle_sigsegv;
	sigemptyset(&sa.sa_mask);
	if(sigaction(SIGSEGV,&sa,NULL)==-1){
		perror("sigaction");
		exit(EXIT_FAILURE);
	}
	printf("SIGSEGV handle is set. Now cauing a segmenttaion fault...\n");
	int *ptr =NULL;
	*ptr=42;
	return 0;
}
/*output
SIGSEGV handle is set. Now cauing a segmenttaion fault...
Caought SIGSEGV 11
Fault address: (nil)
*/

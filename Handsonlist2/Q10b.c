#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void handle_sigint(int sig , siginfo_t *info,void *context){
	printf("Caught SIGINT %d\n",sig);
        printf("Signal sent by process ID: %d\n",info->si_pid);
}
int main (){
	struct sigaction sa;
	sa.sa_flags=SA_SIGINFO;
	sa.sa_sigaction=handle_sigint;
	sigemptyset(&sa.sa_mask);

	if(sigaction(SIGINT,&sa,NULL)==-1){
		perror("sigaction");
		exit(EXIT_FAILURE);
	}
	printf("SIGINT handler is set. Press Ctrl+C to trigger SIGINT..\n");
	while(1){
		printf("Waiting for SIGINT (Ctrl+C)...\n)");
		sleep(2);
	}
	return 0;
}
/* Output
SIGINT handler is set. Press Ctrl+C to trigger SIGINT..
Waiting for SIGINT (Ctrl+C)...
)Waiting for SIGINT (Ctrl+C)...
)Waiting for SIGINT (Ctrl+C)...
)Waiting for SIGINT (Ctrl+C)...
)Waiting for SIGINT (Ctrl+C)...
^C)Caught SIGINT 2
Signal sent by process ID: 0
Waiting for SIGINT (Ctrl+C)...
)Waiting for SIGINT (Ctrl+C)...
^C)Caught SIGINT 2
*/

#include <stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void handle_sigint(int sig){
	printf("Caught SIGINT %d\n",sig);
	exit(EXIT_FAILURE);
}
int main (){
	signal(SIGINT,handle_sigint);
	printf("Press ctrl+C to trigger SIGINT...\n");
	while(1){
		sleep(1);
	}
	return 0;
}
/* Output
Press ctrl+C to trigger SIGINT...
^CCaught SIGINT 2
*/

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
void handle_sigfpe(int sig){
	printf("Caught SIGFPE %d\n",sig);
	exit(EXIT_FAILURE);
}
void trigger_floating_point_exception(){
	int result =1/0;
	printf("Result: %d\n",result);
}
int main (){
	signal(SIGFPE,handle_sigfpe);
	trigger_floating_point_exception();
	return 0;
}
/* Output
Caught SIGFPE 8
*/

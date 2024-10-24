#include <stdio.h>
#include<stdlib.h>
#include<signal.h>
void handle_sigsegv(int sig){
	printf("Caught SIGSEGV :%d\n",sig);
	exit(EXIT_FAILURE);
}
void trigger_segmentation_fault(){
	int *ptr=NULL;
	*ptr=42;
}
int main (){
	signal(SIGSEGV,handle_sigsegv);
	trigger_segmentation_fault();
	return 0;
}
/* Output
Caught SIGSEGV :11
*/

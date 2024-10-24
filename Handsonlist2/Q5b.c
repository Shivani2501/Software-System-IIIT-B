#include<stdio.h>
#include<unistd.h>
int main (){
	long max_procs=sysconf(_SC_CHILD_MAX);
	if(max_procs==-1){
		perror("sysconf(_SC_CHILD_MAX) failed");
	}
	else{
		printf("Max number of simultaneous processes per user ID : %ld\n",max_procs);
	}
	return 0;
}
/* Output
Max number of simultaneous processes per user ID : 22767
*/

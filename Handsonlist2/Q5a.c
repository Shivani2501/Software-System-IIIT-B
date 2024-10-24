#include<stdio.h>
#include<unistd.h>
int main ()
{
	long arg_max=sysconf(_SC_ARG_MAX);
	if(arg_max==-1){
		perror("sysconf(_SC_ARG_MAX) failed");
	}
	else
	{
	printf("Maximum lengthof arguments to exec: %ld bytes\n",arg_max);
	}
	return 0;
}
/* Output
Maximum lengthof arguments to exec: 2097152 bytes
*/

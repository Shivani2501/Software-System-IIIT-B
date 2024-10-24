#include<stdio.h>
#include<unistd.h>
int main (){
	long clock_ticks=sysconf(_SC_CLK_TCK);
	if(clock_ticks == -1){
		perror("sysconf(_SC_CLK_TCK) failed");
	}else{
		printf("Number of clock ticksper seconds: %ld\n",clock_ticks);
	}
	return 0;
}
/* Output
Number of clock ticksper seconds: 100
*/

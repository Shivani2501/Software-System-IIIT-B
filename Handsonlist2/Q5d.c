#include<stdio.h>
#include<sys/resource.h>
#include<stdlib.h>
int main (){
	struct rlimit limit;
	if(getrlimit(RLIMIT_NOFILE,&limit)==0){
		printf("Maximum number of open files (Soft limit): %ld\n",limit.rlim_cur);
		printf("Maximum number of open files (hard limit): %ld\n",limit.rlim_max);
	}else{
		perror("getrlimit(RLIMIT_NOFILE) failed");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
/* Output
Maximum number of open files (Soft limit): 1024
Maximum number of open files (hard limit): 1048576
*/

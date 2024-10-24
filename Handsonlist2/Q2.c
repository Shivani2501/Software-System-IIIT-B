#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
void print_limit(int resource ,const char *name){
	struct rlimit limit;
	if(getrlimit(resource,&limit)==0){
		printf("%s:\n",name);
		printf("Soft limit: " );
		if(limit.rlim_cur==RLIM_INFINITY)
			printf("Unlimited\n");
		else printf("%ld\n",(long)limit.rlim_cur);
				printf("Hard Limit: " );
				if(limit.rlim_max==RLIM_INFINITY)
					printf("Unlimited\n");
					else
					printf("%ld\n",(long)limit.rlim_max);
					printf("\n");
					}
					else{
					perror("getrlimit");
					exit(EXIT_FAILURE);
					}
					}
					int main ()
					{
					print_limit(RLIMIT_CPU,"CPU Time limit");
					print_limit(RLIMIT_FSIZE,"File Size limit");
print_limit(RLIMIT_NPROC,"Max Number of Processes");
print_limit(RLIMIT_STACK,"Stack size limit");
print_limit(RLIMIT_AS,"Virtual Memory Limit");
print_limit(RLIMIT_NOFILE,"Max Number Of file Descriptors");

return 0;
					}
					
					
/* Output

CPU Time limit:
Soft limit: Unlimited
Hard Limit: Unlimited

File Size limit:
Soft limit: Unlimited
Hard Limit: Unlimited

Max Number of Processes:
Soft limit: 22767
Hard Limit: 22767

Stack size limit:
Soft limit: 8388608
Hard Limit: Unlimited

Virtual Memory Limit:
Soft limit: Unlimited
Hard Limit: Unlimited

Max Number Of file Descriptors:
Soft limit: 1024
Hard Limit: 1048576
*/



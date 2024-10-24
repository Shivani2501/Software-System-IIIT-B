#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>

void print_mem_info(){
	FILE *file=fopen("/proc/meminfo","r");
	if(file==NULL){
		perror("fopen");
		return ;
	}
	char line[256];
	long total_pages=-1;
	long available_pages=-1;
	while(fgets(line,sizeof(line),file)){
		if(sscanf(line,"Memtotal: %ld KB",&total_pages)==1){
			total_pages/=4;
		}
		if(sscanf(line,"MemAvailable: %ld kB",&available_pages)==1){
			available_pages/=4;
		}
	}
	fclose(file);

        if (total_pages != -1) {
        printf("f. Total number of pages in physical memory: %ld\n", total_pages);
        printf("g. Number of currently available pages in physical memory: %ld\n", available_pages);
    } else {
        printf("Error reading memory information\n");
    }
}

int main ()
{
	long arg_max=sysconf(_SC_ARG_MAX);
	if(arg_max !=-1){
		printf("a.Maximum length of argument to exec: %ld bytes\n",arg_max);
	}else{
		perror("sysconf(_SC_ARG_MAX)");
	}
	long max_procs=sysconf(_SC_CHILD_MAX);
	if(max_procs !=-1){
		printf("b.Maximum number of simultaneous processes per user id: %ld\n", max_procs);
    } else {
        perror("sysconf(_SC_CHILD_MAX)");
    }
        long clock_ticks = sysconf(_SC_CLK_TCK);
    if (clock_ticks != -1) {
        printf("c. Number of clock ticks per second: %ld\n", clock_ticks);
    } else {
        perror("sysconf(_SC_CLK_TCK)");
    }

    
    struct rlimit file_limit;
    if (getrlimit(RLIMIT_NOFILE, &file_limit) == 0) {
        printf("d. Maximum number of open files: %ld\n", file_limit.rlim_cur);
    } else {
        perror("getrlimit(RLIMIT_NOFILE)");
    }

    
    long page_size = sysconf(_SC_PAGESIZE);
    if (page_size != -1) {
        printf("e. Size of a page: %ld bytes\n", page_size);
    } else {
        perror("sysconf(_SC_PAGESIZE)");
    }


    print_mem_info();

    return 0;
}
/* Output
a.Maximum length of argument to exec: 2097152 bytes
b.Maximum number of simultaneous processes per user id: 22767
c. Number of clock ticks per second: 100
d. Maximum number of open files: 1024
e. Size of a page: 4096 bytes
Error reading memory information
*/


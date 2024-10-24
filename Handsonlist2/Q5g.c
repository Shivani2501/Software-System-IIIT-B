#include <stdio.h>
#include <unistd.h>
int main (){
	long page_size=sysconf(_SC_PAGESIZE);
	long avail_pages=sysconf(_SC_AVPHYS_PAGES);
	if(page_size ==-1||avail_pages==-1){
		perror("sysconf");
		return 1;
	}

	printf("page size : %ld bytes\n",page_size);
	printf("available number of pages: %ld\n",avail_pages);
	printf("Available physical memory: %ld bytes\n",page_size*avail_pages);
	return 0;
}
/* Output
page size : 4096 bytes
available number of pages: 218044
Available physical memory: 893108224 bytes
*/

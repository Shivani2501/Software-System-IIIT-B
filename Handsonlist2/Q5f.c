#include <stdio.h>
#include <unistd.h>
int main ()
{
	long page_size=sysconf(_SC_PAGESIZE);
	long num_pages=sysconf(_SC_PHYS_PAGES);
	if(page_size==-1||num_pages==-1){
		perror("sysconf");
		return 1;
	}
	printf("Page size: %ld bytes\n",page_size);
	printf("Total number of pages: %ld\n",num_pages);
	printf("Total physical memory: %ld bytes\n",page_size*num_pages);
	return 0;
}
/* Output
Page size: 4096 bytes
Total number of pages: 1475861
Total physical memory: 6045126656 bytes
*/

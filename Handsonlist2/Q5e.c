#include<stdio.h>
#include<unistd.h>
int main (){
	long page_size=sysconf(_SC_PAGESIZE);
	if(page_size==-1){
		perror("sysconf(_SC_PAGESIZE) failed");
	}
else{
	printf("size of a memory page : %ld bytes \n",page_size);
}
return 0;
}
/*output
size of a memory page : 4096 bytes 
*/

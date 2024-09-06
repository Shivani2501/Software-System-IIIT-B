/*
============================================================================
Name : 1c.c
Author : Shivani Sanjiv shukla
Description : Create the following types of a files using (i) shell command (ii) system call
              c. FIFO (mkfifo Library Function or mknod system call)
Date: 31st Aug, 2024.
============================================================================
*/


#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>

int main ()
{
	const char *path="hey.sh";
		printf("FIFO file created/n ");
	return 0;
}

/* Output:- 
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
FIFO file created/n shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ 
*/


/*
============================================================================
Name : 8.c
Author : Shivani Shukla
Description : Write a separate program using signal system call to catch the following signals.
a. SIGSEGV
b. SIGINT
c. SIGFPE
d. SIGALRM (use alarm system call)
e. SIGALRM (use setitimer system call)
f. SIGVTALRM (use setitimer system call)
g. SIGPROF (use setitimer system call)
============================================================================
*/
#include <stdio.h>
#include<stdlib.h>
#include<signal.h>
void handle_sigsegv(int sig){
	printf("Caught SIGSEGV :%d\n",sig);
	exit(EXIT_FAILURE);
}
void trigger_segmentation_fault(){
	int *ptr=NULL;
	*ptr=42;
}
int main (){
	signal(SIGSEGV,handle_sigsegv);
	trigger_segmentation_fault();
	return 0;
}
/* Output
Caught SIGSEGV :11
*/

/*
============================================================================
Name : 4.c
Author : Shivani Shukla
Description : Write a program to measure how much time is taken to execute 100 getppid ( )
system call. Use time stamp counter.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
unsigned long long rdtsc_start(){
	unsigned int lo,hi;
	__asm__ volatile("rdtsc" : "=a"(lo),"=d"(hi));
	return ((unsigned long long )hi<<32)|lo;
}
unsigned long long rdtsc_end(){
	ungccsigned int lo,hi;
	__asm__ volatile("rdtsc":"=a"(lo),"=d"(hi)::"rcx");
       return ((unsigned long long)hi<<32)|lo;
}
int main (){
	unsigned long long start,end;
	int i;
	start=rdtsc_start();
	for(i=0;i<100;i++){
		getppid();
	}
	end=rdtsc_end();
	unsigned long long cycles=end-start;
	printf("total cycles taken for 100 getppid()calls: %llu\n",cycles);
	printf("average cycles per getppid() call :%llu\n",cycles/100);
	return 0;
}
/* Output
Write a program to measure how much time is taken to execute 100 getppid ( )
system call. Use time stamp counter.
*/

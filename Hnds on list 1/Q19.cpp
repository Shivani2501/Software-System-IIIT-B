
/*
============================================================================
Name : 19.c
Author : Shivani Sanjiv Shukla
Description :Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>
#include<x86intrin.h>
using namespace std;
int main(){
	unsigned long long start, end;
	start=_rdtsc();
	pid_t pid=getpid();
	end=_rdtsc();
	unsigned long long cycles =end-start;
	cout<<"Time for getpid() function: " << cycles<<"clock cycles."<<endl;
	cout<<"Process ID: "<<pid<<endl;
	return 0;
}
/*
 * output
 *
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ open Q19.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q19.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Time for getpid() function: 8844clock cycles.
Process ID: 99096
*/

/*
============================================================================
Name : 29.c
Author : Shivani Sanjiv Shukla
Description :Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<sched.h>
#include<cstring>
#include<cerrno>
#include<unistd.h>
using namespace std;
int main (){
	pid_t pid =getpid();
	int curr_pol=sched_getscheduler(pid);
	cout<<"curent scheduling policy is as follow:  ";
	switch(curr_pol){
		case SCHED_OTHER: cout<<"SCHED_OTHER" ;break;
	        case SCHED_FIFO: cout<<"SCHED_FIFO";break;
	        case SCHED_RR: cout<<"Unknown";break;
	}
	cout<<endl;
	int new_pol =SCHED_FIFO;
	struct sched_param schedParam;
	schedParam.sched_priority=10;
	cout<<"scheduling policy changes successfully to sched_FIFO with priority"<<schedParam.sched_priority<<endl;
	curr_pol =sched_getscheduler(pid);
	cout<<"New scheduling policy: ";
	switch (curr_pol){
		case SCHED_OTHER: cout<<"SCHED_OTHE" ;break;
		case SCHED_FIFO: cout<<"SCHED_FIFO";break;
	        case SCHED_RR: cout<<"SCHED_RR"; break;
		default: cout<<"Unknown";break;
	}
	cout<<endl;
	return 0;
}

/*output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q29.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
curent scheduling policy is as follow:  SCHED_OTHER
scheduling policy changes successfully to sched_FIFO with priority10
New scheduling policy: SCHED_OTHE
*/

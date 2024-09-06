/*
============================================================================
Name : 28.c
Author : Shivani Sanjiv Shukla
Description :Write a program to get maximum and minimum real time priority.
Date: 31st Aug, 2024.
============================================================================
*/


#include <iostream>
#include<sched.h>
#include<cerrno>
#include<cstring>
using namespace std;
int main ()
{
	int pol =SCHED_RR;
	int max=sched_get_priority_max(pol);
	int min=sched_get_priority_min(pol);
	cout<<"Real-time schedulimg: ";
	cout<<"Max real-time: "<<max<<endl;
	cout<<"Min real-time " <<min<<endl;
	return 0;
	}

/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q28.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Real-time schedulimg: Max real-time: 99
Min real-time 1
*/

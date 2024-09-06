/*
============================================================================
Name : 20.c
Author : Shivani Sanjiv Shukla
Description :Find out the priority of your running program. Modify the priority with nice command.
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<sys/time.h>
#include<sys/resource.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main ()
{
	pid_t pid =getpid();
       int curr_Prio=getpriority(PRIO_PROCESS,pid);
       cout<<"Priority of process : "<<pid<<" is: "<<curr_Prio<<endl;
       int new_Prio=curr_Prio+5;
       curr_Prio=getpriority(PRIO_PROCESS,pid);
       cout<<"New prioiryt is "<<pid<<" is : "<<curr_Prio<<endl;
       return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q20.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Priority of process : 99225 is: 0
New prioiryt is 99225 is : 0
*/


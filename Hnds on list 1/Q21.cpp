/*
============================================================================
Name : 21.c
Author : Shivani Sanjiv Shukla
Description :Write a program, call fork and print the parent and child process id.
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>
using namespace std;
int main (){
	pid_t pid=fork();
	if(pid==0)
	{
		cout<<"child process: " <<endl;
		cout<<"child PID : " <<getpid()<<endl;
		cout<<"Parent id : " <<getppid()<<endl;
	}
	else{
		cout<<"Parent process: " <<endl;
		cout<<"Parenst id: " <<getpid()<<endl;
		cout<<" child PID : " <<pid<<endl;
	}
	return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q21.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Parent process:
Parenst id: 99431
 child PID : 99432
child process:
child PID : 99432
Parent id : 99431
*/


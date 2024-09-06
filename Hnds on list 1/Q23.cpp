/*
============================================================================
Name : 23.c
Author : Shivani Sanjiv Shukla
Description :Write a program to create a Zombie state of the running program.
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;
int main ()
{
	pid_t pid =fork();
	if(pid==0){
		cout<<"Child process id is" <<getpid()<<"is exiting"<<endl;
		_exit(0);
	}
	else{
		cout<<"Parent process id "<<getpid()<<"is sleeping"<<endl;
		sleep(10);
		int s;
		waitpid(pid, &s,0);
		cout<< "Parent process is cleaned up the zombie proces id is "<<pid<<endl;
	}
	return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ open Q23.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q23.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Parent process id 99719is sleeping
Child process id is99720is exiting
Parent process is cleaned up the zombie proces id is 99720
*/

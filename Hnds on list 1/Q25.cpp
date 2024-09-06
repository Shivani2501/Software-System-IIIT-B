/*
============================================================================
Name : 25.c
Author : Shivani Sanjiv Shukla
Description :Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
Date: 31st Aug, 2024.
============================================================================
*/

#include <iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;
int main ()
{
	pid_t childpid[3];
	for(int i=0;i<3;++i){
		childpid[i]= fork();
		if(childpid[i]==0){
			cout<<"Child "<< i+1 <<"(PID: "<< getpid()<<") is running";
			sleep(2+i);
			cout<<"Child " <<i+1 << "(PID: " <<getpid()<<"is exiting";
			_exit(0);
		}
	}
	cout<<"Parent (PID: " <<getpid()<<") is waiting for child 2 (PID: " <<childpid[1]<<") to finish";
	int status ;
	pid_t wait= waitpid(childpid[1],&status , 0);
	if (WIFEXITED(status)){
		cout<<"Child 2 (PID :  "<<wait<<")exited with status " <<WEXITSTATUS(status)<<endl;
	}
	for(int i=0;i<3;++i)
	{
		if(childpid[i] !=wait){
			waitpid(childpid[i],&status,0);
		}
	}
	cout<<"Parent process exiting ";
	return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q25.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Parent (PID: 99984) is waiting for child 2 (PID: 99986) to finishChild 2 (PID :  99986)exited with status 0
*/

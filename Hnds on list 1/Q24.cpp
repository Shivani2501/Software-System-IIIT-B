/*
============================================================================
Name : 24.c
Author : Shivani Sanjiv Shukla
Description :Write a program to create an orphan process.
Date: 31st Aug, 2024.
============================================================================
*/


#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;
int main()
{
	pid_t pid= fork();
	if(pid == 0 )
	{
	sleep(2);
	cout<<"Child Processid is "<<getpid()<<" is orphan ";
	cout<<"Child process id is "<<getpid()<<"and parent is id "<<getppid()<<endl;
	}
	else{
		cout<<"Parent process id is "<<getpid()<<"is terminating"<<endl;
		_exit(0);
	}
	return 0;
	}
/*output
 *shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ open Q24.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q24.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Parent process id is 99858is terminating
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ Child Processid is 99859 is orphan Child process id is 99859and parent is id 1561
*/

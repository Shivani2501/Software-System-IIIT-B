/*
============================================================================
Name : 13.c
Author : Shivani Sanjiv Shukla
Description :Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<sys/select.h>
#include<unistd.h>
using namespace std;
int main(){
	fd_set read;
	FD_ZERO(&read);
	FD_SET(STDIN_FILENO,&read);

	struct timeval timeout;
	timeout.tv_sec =10;
	timeout.tv_usec=0;

	int ret =select(STDIN_FILENO +1,&read ,nullptr,nullptr,&timeout);
	if(FD_ISSET(STDIN_FILENO,&read)){
			cout<<"Data is available onSTDIN"<<endl;
			}
	else{
		cout<<"Data unavailable"<<endl;
	}
			return 0;
			}
/*Output
 *
 *
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q13.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Data unavailable
*/

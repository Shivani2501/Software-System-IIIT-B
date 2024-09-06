/*
============================================================================
Name : 16a.c
Author : Shivani Sanjiv Shukla
Description :Write a program to perform mandatory locking.
a. Implement write lock
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	const char*name="File10.txt";
	int fd =open(name ,O_RDWR | O_CREAT ,0664);
	struct flock lock;
	memset (&lock,0,sizeof(lock));
	lock.l_type=F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	cout<<"Lock acquired. Press enter to release";
		cin.get();
	lock.l_type =F_UNLCK;
	close(fd);
	return 0;
}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q16a.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Lock acquired. Press enter to release
*/

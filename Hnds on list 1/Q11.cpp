/*
============================================================================
Name : 11.c
Author : Shivani Sanjiv Shukla
Description :Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
void wac(int fd , const char *data){
	ssize_t bytes=write(fd,data,10);
	if(bytes!=-1)
	{
		cout<<"Wrote"<<bytes<<"bytes: "<<data<<endl;
	}
}
int main(){
	const char*name="dup_exmp1.txt";
	int fd = open(name,O_WRONLY | O_CREAT | O_APPEND,0666);
	int fd_dup =dup(fd);
	int fd_dup2 =dup2(fd,fd_dup+1);
	int fd_fcntl=fcntl(fd,F_DUPFD,fd_dup2+1);
	wac(fd,"Original");
	wac(fd_dup,"Dup1");
	wac(fd_dup2,"Dup 2");
	wac(fd_fcntl,"Fcntl");
	close(fd);
	close(fd_dup);
	close(fd_dup2);
	close(fd_fcntl);
	return 0;
}
/* Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q11.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Wrote10bytes: Original
Wrote10bytes: Dup1
Wrote10bytes: Dup 2
Wrote10bytes: Fcntl
*/

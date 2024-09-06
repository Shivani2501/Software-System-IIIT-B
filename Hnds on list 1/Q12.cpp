/*
============================================================================
Name : 12.c
Author : Shivani Sanjiv Shukla
Description :Write a program to find out the opening mode of a file. Use fcntl.
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	const char *name= "test.txt";
	int fd =open(name,O_RDWR | O_CREAT,0666);
	int flags=fcntl(fd,F_GETFL);
	int accessMode =flags & O_ACCMODE;
	switch(accessMode){
		case O_RDONLY:
			cout<<"File opened in read only mode." <<endl;
break;
                case O_WRONLY:
                       cout<<"File opened in write-onlymode"<<endl;
break;
                case O_RDWR:
                      cout<<"File opened in read-writemode"<<endl;
break;
                default:
                      cout<<"Unknown file opening"<<endl;
	}
close(fd);
return 0;
	}

/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q12.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
File opened in read-writemode
*/

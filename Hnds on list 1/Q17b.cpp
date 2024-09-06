/*
============================================================================
Name : 17.c
Author : Shivani Sanjiv Shukla
Description :Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
Date: 31st Aug, 2024.
============================================================================
*/
#include<iostream>
#include<fstream>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main(){
	const char *name ="File10.txt";
	int fd = open (name,O_RDWR);
	struct flock lock;
	memset(&lock,0,sizeof(lock));
	lock.l_type =F_WRLCK;
	lock.l_whence =SEEK_SET;
	lock.l_start =0;
	lock.l_len=0;
	int tic_No;
	ifstream ticketfile(name);
	ticketfile>>tic_No;
	ticketfile.close();
	tic_No++;
	cout<<"New Ticket number is as follows : "<<tic_No<<endl;      
       	ofstream outFile(name);
	outFile<<tic_No;
	outFile.close();
	lock.l_type=F_UNLCK;
	close(fd);
	return 0;
}

/*
 * output
 *
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ open Q17b.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q17b.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
New Ticket number is as follows : 2
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
New Ticket number is as follows : 3
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
New Ticket number is as follows : 4
*/


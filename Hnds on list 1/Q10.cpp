/*
============================================================================
Name : 10.c
Author : Shivani Sanjiv Shukla
Description :10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.
Date: 31st Aug, 2024.
============================================================================
*/


#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main()
{
	const char*name="File11.txt";
	int fd=open(name, O_RDWR | O_CREAT | O_TRUNC ,0666);
	const char *data1="1234567890";
	ssize_t wr=write(fd,data1,10);
        off_t offset =lseek(fd,10,SEEK_CUR);
	if(offset!=-1){
		cout<<"lseek successful. Current file offset: " <<offset<<endl;
	}
	const char *data2="abcdefghij";
	close(fd);
	return 0;
}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q10.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
lseek successful. Current file offset: 20
*/
	

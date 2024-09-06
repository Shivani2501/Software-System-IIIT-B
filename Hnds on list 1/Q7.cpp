/*
============================================================================
Name : 7.c
Author: Shivani Sanjiv Shukla
Description :Write a program to copy file1 into file2 ($cp file1 file2). 
Date: 31st  Aug, 2024.
============================================================================
*/



#include <iostream>
#include<fcntl.h>
#include<unistd.h>

using namespace std;
int main(int argc ,char* argv[]){
	const char* sourcefile = argv[1];
        const char* destfile = argv[2];
	cout<<"Source file is : "<<sourcefile<<endl;
	cout<<"Destination file is : "<<destfile<<endl;

int sourceFD = open(sourcefile,O_RDONLY);
int destFD =open(destfile,O_WRONLY|O_CREAT|O_TRUNC,S_IRUSR|S_IWUSR);

const int bufferSize =1024;
char buffer[bufferSize];
ssize_t bytesRead;

while((bytesRead = read(sourceFD,buffer,bufferSize))>0){
	ssize_t bytesWritten=write(destFD,buffer ,bytesRead);
	}
close(sourceFD);
close(destFD);
cout<<"File copied. "<< endl;
return 0;
}
/* 
 * Output 
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
File copied. 
*/

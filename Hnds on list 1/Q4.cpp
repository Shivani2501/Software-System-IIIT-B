/*
============================================================================
Name : 4.c
Author : Shivani Sanjiv Shukla
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	const char*F2="Q4.txt";
	int F2_Desc=open(F2,O_RDWR);
        cout<<"File created and here is the file descriptor: "<<F2_Desc<<endl;
	close(F2_Desc);
	F2_Desc=open(F2,O_RDWR|O_EXCL);

	cout<<"File opened with O_EXCL. File Descriptor is : " <<F2_Desc<<endl;

	close(F2_Desc);
		return 0;
}
/* Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q4.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
File created and here is the file descriptor: 3
File opened with O_EXCL. File Descriptor is : 3
*/

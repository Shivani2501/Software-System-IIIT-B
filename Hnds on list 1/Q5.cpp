/*
============================================================================
Name : 5.c
Author : Shivani Sanjiv Shukla
Description : Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.
Date: 31st Aug, 2024.
============================================================================
*/

#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	const char*F_names[] = {
		"One.txt",
		"Two.txt",
		"Three.txt",
		"Four.txt",
		"Five.txt"};
	const int numFiles=5;
	for(int i=0;i<numFiles;i++)
	{
		int f5_Decp=creat(F_names[i],S_IRUSR|S_IWUSR);
		cout<<"Files are : " << F_names[i]<<"with descriptor are as follows: " <<f5_Decp<<endl;
		close(f5_Decp);
	}

		while(true){

		}
	
		return 0;
	}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Files are : One.txtwith descriptor are as follows: 3
Files are : Two.txtwith descriptor are as follows: 3
Files are : Three.txtwith descriptor are as follows: 3
Files are : Four.txtwith descriptor are as follows: 3
Files are : Five.txtwith descriptor are as follows: 3
*/

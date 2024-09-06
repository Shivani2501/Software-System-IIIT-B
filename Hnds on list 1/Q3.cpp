/*
============================================================================
 * Name: 30.c
 * Author: Shivani Sanjiv Shukla
 * Description: Write a program to run a script at a specific time using a Daemon process.
 * Date: 31st August 2024 
============================================================================
*/

#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	const char *F1_name="Q3.txt";
	int F1_Desc=creat(F1_name,S_IRUSR|S_IWUSR);
        cout<<"File Description as follows:" <<F1_Desc<<endl;
	cout<<"Flie is created"<< F1_Desc<<endl;
	return 0;
		}
/* Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
File Description as follows:3
Flie is created3
*/

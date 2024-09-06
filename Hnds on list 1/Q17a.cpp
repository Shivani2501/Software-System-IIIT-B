/*
============================================================================
Name : 17.c
Author: Shivani Sanjiv Shukla
Description :Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<fstream>
using namespace std;
int main (){
	const char*name ="File10.txt";
	ofstream ticketFile(name);
	int tic_No =1;
	ticketFile<<tic_No;
	ticketFile.close();
	cout<<"Ticket is initialised with"<<tic_No<<endl;
	return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q17a.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Ticket is initialised with1
*/

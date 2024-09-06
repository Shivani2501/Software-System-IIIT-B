/*
============================================================================
Name : 6.c
Author : Shivani Sanjiv Shukla
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 31st Aug, 2024.
============================================================================
*/


#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
	const int b_Size = 1024;
	char buffer[b_Size];
	ssize_t B_R;

	while((B_R =read(STDIN_FILENO ,buffer,b_Size))>0){
		write(STDOUT_FILENO,buffer,B_R);
	}
	return 0;
}
/* 
 * Output:
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q6.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Hello world
Hello world
This is input output program'
This is input output program'
*/



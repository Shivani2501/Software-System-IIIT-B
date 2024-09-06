/*
============================================================================
Name : 8.c
Author : Shivani Sanjiv Shukla
Description :Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
Date: 31st Aug, 2024.
============================================================================
*/



#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string name="source.txt";
        ifstream file(name);
	string line;
	while(getline(file,line))
		{
		cout<<line<<endl;
		}
		file.close();
		return 0;
		}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q8.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
3
*/

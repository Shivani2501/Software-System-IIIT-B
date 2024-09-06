/*
============================================================================
Name : 9.c
Author : Shivani Sanjiv Shukla
Description :9. Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change 
Date: 31st Aug, 2024.
============================================================================
*/




#include<iostream>
#include<sys/stat.h>
#include<unistd.h>
#include<pwd.h>
#include<grp.h>
#include<ctime>
using namespace std;

int main()
{
	string name="File10.txt";
	struct stat fileStat;
	
	cout<<"File: "<<name<<endl;
	cout<<"Inode: "<<fileStat.st_ino<<endl;
	cout<<"Number of hard links: "<<fileStat.st_nlink<<endl;
	cout<<"User Id(UID): "<<fileStat.st_uid<<endl;
	cout<<"Group ID(GID): "<<fileStat.st_gid<<endl;
	cout<<"Size: "<<fileStat.st_size<<"bytres"<<endl;
	cout<<"Block size: " <<fileStat.st_blksize<<"bytes"<<endl;
	cout<<"Number of Blocks: " <<fileStat.st_blocks<<endl;
	cout<<"time of last access: " <<ctime(&fileStat.st_atime);
	cout<<"Time of last modification: " <<ctime(&fileStat.st_mtime);
	cout<<"Time of last change: " <<ctime(&fileStat.st_ctime);
	return 0;
}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q9.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
File: File10.txt
Inode: 0
Number of hard links: 0
User Id(UID): 0
Group ID(GID): 0
Size: 139906536345312bytres
Block size: 0bytes
Number of Blocks: 4607
time of last access: Thu Jan  1 05:28:24 1970
Time of last modification: Sat Jul  2 09:07:36 4435431
Time of last change: Thu Jan  1 05:28:24 1970
*/

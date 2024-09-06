/*
============================================================================
Name : 1a.c
Author : Shivani Sanjiv Shukla
Description : Create the following types of a files using (i) shell command (ii) system call
              a. soft link (symlink system call)
Date: 31st Aug, 2024.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
const char *target="file2.c";
const char *linkpath="sample";
if(symlink(target,linkpath)==-1)
{
perror("Symlink");
return 1;
}
printf("symbolic link created %s-> %s\n",linkpath , target);
return 0;
}

/*Output:
 * Using C code:
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Symlink: File exists

*/


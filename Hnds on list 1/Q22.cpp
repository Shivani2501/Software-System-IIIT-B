/*
============================================================================
Name : 22.c
Author : Shivani Sanjiv Shukla
Description :Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.
Date: 31st Aug, 2024.
============================================================================
*/

#include <unistd.h>    
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <stdio.h>     
int main(int argc, char *argv[])  
{
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];  
    int childPid, fileDescriptor;

    
    fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_APPEND, S_IRWXU);
   
    childPid = fork();


    if (childPid != 0) { 
        
          write(fileDescriptor, "Parent\n", 7);
    } else { 
           write(fileDescriptor, "Child\n", 6);
    }

   
    close(fileDescriptor);

    return 0; 
}
/*
 * output
 *
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q22.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Usage: ./a.out <filename>
*/

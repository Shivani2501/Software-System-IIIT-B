/*
============================================================================
Name : 14.c
Author : Shivani Sanjiv Shukla
Description :Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.
Date: 31st Aug, 2024.
============================================================================
*/
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <file_path>" << std::endl;
        return 1;
    }

    const char *file_path = argv[1];
    struct stat fileStat;

    if (stat(file_path, &fileStat) == -1) {
        std::cerr << "Error: Could not retrieve file information." << std::endl;
        return 1;
    }

    if (S_ISREG(fileStat.st_mode)) {
     cout << "The file is a regular file." << endl;
    } else if (S_ISDIR(fileStat.st_mode)) {
      cout << "The file is a directory." << endl;
    } else if (S_ISCHR(fileStat.st_mode)) {
      cout << "The file is a character device." <<endl;
    } else if (S_ISBLK(fileStat.st_mode)) {
       cout<< "The file is a block device." << endl;
    } else if (S_ISFIFO(fileStat.st_mode)) {
        cout<< "The file is a FIFO (named pipe)." <<endl;
    } else if (S_ISLNK(fileStat.st_mode)) {
        cout<< "The file is a symbolic link." << endl;
    } else if (S_ISSOCK(fileStat.st_mode)) {
        cout<< "The file is a socket." << endl;
    } else {
       cout << "Unknown file type." << endl;
    }

    return 0;
}
/*
 * Output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q14.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Usage: ./a.out <file_path>
*/

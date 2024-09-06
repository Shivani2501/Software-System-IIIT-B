/*
============================================================================
Name : 1b.c
Author : Shivani Sanjiv Shukla
Description : Create the following types of a files using (i) shell command (ii) system call
              b. Hard link (link system call)
Date: 31st Aug, 2024.
============================================================================
*/


#include <unistd.h>
#include <stdio.h>

int main() {
    const char *original = "target.txt";
    const char *linkpath = "path.cpp";

    if (link(original, linkpath) == -1) {
        perror("link");
        return 1;
    }

    return 0;
}

/*Output:
 *
 * Using C++ code:
 shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q1b.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
link: File exists

*/.

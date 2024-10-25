/*
============================================================================
Name : 3.c
Author : Shivani Shukla
Description : Write a program to print the system resource limits. Use setrlimit system call
Date: 21th Sep, 2024.
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <unistd.h>

int main() {
    struct rlimit limit;

    
    if (getrlimit(RLIMIT_FSIZE, &limit) == 0) {
        printf("Current File Size Limit:\n");
        printf("  Soft limit: %ld bytes\n", (long)limit.rlim_cur);
        printf("  Hard limit: %ld bytes\n", (long)limit.rlim_max);
    } else {
        perror("getrlimit");
        return 1;
    }

    
    limit.rlim_cur = 1024 * 1024; // Set soft limit to 1 MB

    if (setrlimit(RLIMIT_FSIZE, &limit) != 0) {
        perror("setrlimit");
        return 1;
    }

    
    if (getrlimit(RLIMIT_FSIZE, &limit) == 0) {
        printf("Updated File Size Limit:\n");
        printf("  Soft limit: %ld bytes\n", (long)limit.rlim_cur);
        printf("  Hard limit: %ld bytes\n", (long)limit.rlim_max);
    } else {
        perror("getrlimit");
        return 1;
    }

    
    FILE *file = fopen("test_file.txt", "w");
    if (!file) {
        perror("fopen");
        return 1;
    }

    
    for (long i = 0; i < 2 * 1024 * 1024; i++) {
        fputc('A', file);
    }

    fclose(file);
    printf("File write complete\n");

    return 0;
}
/* Output
Current File Size Limit:
  Soft limit: -1 bytes
  Hard limit: -1 bytes
Updated File Size Limit:
  Soft limit: 1048576 bytes
  Hard limit: -1 bytes
File size limit exceeded (core dumped)
*/

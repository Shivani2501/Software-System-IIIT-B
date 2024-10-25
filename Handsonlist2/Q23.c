/*
Name : 23.c
Author : Shivani Shukla
Description : Write a program to print the maximum number of files can be opened within a process and
size of a pipe (circular buffer).
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main() {
    
    struct rlimit limit;
    if (getrlimit(RLIMIT_NOFILE, &limit) == -1) {
        perror("getrlimit");
        return 1;
    }
    
    printf("Maximum number of files a process can open: %ld\n", limit.rlim_cur);

    
    int pipefd[2];
    if (pipe(pipefd) == -1) {
        perror("pipe");
        return 1;
    }

    int pipe_size = fcntl(pipefd[0], F_GETPIPE_SZ);
    if (pipe_size == -1) {
        perror("fcntl");
        close(pipefd[0]);
        close(pipefd[1]);
        return 1;
    }

    printf("Size of the pipe (circular buffer): %d bytes\n", pipe_size);

    
    close(pipefd[0]);
    close(pipefd[1]);

    return 0;
}
/* Output
Received: Hello
*/

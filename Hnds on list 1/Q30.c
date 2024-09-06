/*
============================================================================
 * Name: 30.c
 * Author: Shivani Sanjiv Shukla
 * Description: Write a program to run a script at a specific time using a Daemon process.
 * Date: 31st August 2024 
============================================================================
*/





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#include <signal.h>

#define SCRIPT_PATH "/home/shivani-sanjiv-shukla/hey.sh" 

void daemonize() {
    int pid;
    pid = fork();


    if (pid > 0) {
        return ;
    }
    
    signal(SIGCHLD, SIG_IGN);

    pid = fork();

    
    

    if (pid > 0) {
        return ;
    }

    umask(0);
    chdir("/");

    for (int x = sysconf(_SC_OPEN_MAX); x >= 0; x--) {
        close(x);
    }
}

void run_script_at_time(int hour, int minute) {
    while (1) {
        time_t now = time(NULL);
    /home/shivani-sanjiv-shukla/hey.sh
    struct tm *local_time = localtime(&now);

        if (local_time->tm_hour == hour && local_time->tm_min == minute) {
            system(SCRIPT_PATH);
            sleep(60); 
        }

        sleep(1); 
    }
}

int main() {
    int hour = 15;
    int minute = 57; 

    daemonize(); 

    run_script_at_time(hour, minute);

    return 0;
}

/*Output:
 *
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Hello World!
Hello World!
Current data and time is : Sat Aug 31 03:57:00 PM IST 2024
Current data and time is : Sat Aug 31 03:57:00 PM IST 2024

*/

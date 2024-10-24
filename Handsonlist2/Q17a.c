
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pipefds[2];
    pid_t pid;

    
    if (pipe(pipefds) == -1) {
        perror("pipe failed");
        exit(EXIT_FAILURE);
    }

        pid = fork();

    if (pid == -1) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
       

       
        close(pipefds[0]);

       
        dup(pipefds[1]);

       
        close(pipefds[1]);

       
        execlp("ls", "ls", "-l", NULL);

       
        perror("execlp failed");
        exit(EXIT_FAILURE);
    } else {
             close(pipefds[1]);

        
        dup(pipefds[0]);

                close(pipefds[0]);

        
        execlp("wc", "wc", NULL);


        perror("execlp failed");
        exit(EXIT_FAILURE);
    }

    return 0;}
    /* Output
    total 1192
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   16208 Sep 21 03:20 a.out
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     670 Sep 21 00:41 Q10a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     957 Sep 21 01:00 Q10b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     853 Sep 21 01:12 Q10c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     999 Sep 21 01:33 Q11.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     683 Sep 21 01:55 Q12.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     302 Sep 21 02:07 Q13a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     342 Sep 21 02:18 Q13b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     740 Sep 21 02:32 Q14.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     760 Sep 21 02:41 Q15.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1350 Sep 21 03:02 Q16.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     821 Sep 21 03:20 Q17a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     704 Sep 21 03:15 Q17b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    4135 Sep 21 03:11 Q17c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     542 Sep 19 10:54 Q1a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     505 Sep 19 10:55 Q1b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     503 Sep 19 10:56 Q1c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1334 Sep 19 10:53 Q2.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1369 Sep 19 13:51 Q3.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     783 Sep 19 14:05 Q4.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     305 Sep 19 19:22 Q5a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     329 Sep 19 19:27 Q5b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    2125 Sep 19 17:10 Q5.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     295 Sep 19 19:34 Q5c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     507 Sep 19 20:10 Q5d.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     281 Sep 19 20:24 Q5e.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     486 Sep 20 21:16 Q5f.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     513 Sep 20 21:53 Q5g.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1034 Sep 20 22:55 Q6.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1060 Sep 20 23:16 Q7.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     332 Sep 20 23:23 Q8a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     360 Sep 20 23:28 Q8b.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     359 Sep 20 23:40 Q8c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     363 Sep 20 23:46 Q8d.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     739 Sep 20 23:55 Q8e.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    1685 Sep 21 00:09 Q8f.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     733 Sep 21 00:22 Q8g.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     845 Sep 21 00:31 Q9.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 1048576 Sep 19 13:51 test_file.txt


*/


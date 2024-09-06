/*
============================================================================
Name : 27e.c
Author : Shivani Sanjiv Shukla
Description :Write a program to execute ls -Rl by the following system calls
e. execvp
Date: 31st Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Define the command and arguments
    char *args[] = {"ls", "-Rl", NULL};  // Arguments for 'ls' command

    // Execute the command using execvp
    if (execvp("ls", args) == -1) {
        perror("execvp");
        exit(EXIT_FAILURE);
    }

    // This part will not be reached unless execvp fails
    return 0;
}
/*
output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ gcc Q27e.c
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
.:
total 556
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   286 Aug 25 10:03  ]
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   184 Aug 27 14:02  a.cpp
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16096 Aug 31 23:37  a.out
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  2675 Aug 22 19:08 'cd ..'
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   581 Aug 22 19:08 'cd ...pub'
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Aug  8 10:19  code
drwxr-xr-x 5 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Aug 31 15:31  Desktop
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 11 19:56  Documents
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 12288 Aug 31 17:51  Downloads
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    80 Aug 31 19:46  dup_exmp1.txt
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16648 Aug 27 09:56  env-vars
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16616 Aug 27 14:07  exe
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16664 Aug 27 14:07  exec
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug  9 10:28  exmp1
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug  9 10:29  exmp3.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug  8 08:31  file
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     1 Aug 31 21:55  File10.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    10 Aug 31 19:43  File11.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug  8 09:11  file2.c
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    21 Aug 25 17:46  file2.txt
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:29  Five.txt
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:29  Four.txt
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16336 Aug 31 14:59  he
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    63 Aug 31 14:07  hey.sh
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 11 19:56  Music
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:29  One.txt
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   767 Aug 27 13:18  Output.txt
-rw-rw-r-- 2 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 27 21:57  path.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 27 21:57  path.txt
drwxr-xr-x 3 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 14 17:48  Pictures
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  2675 Aug 22 19:18  Pragati2501
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  2610 Aug 22 19:21  Pragati25012
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   581 Aug 22 19:21  Pragati25012.pub
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   581 Aug 22 19:18  Pragati2501.pub
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 11 19:56  Public
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1110 Aug 31 19:44  Q10.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1246 Aug 31 19:50  Q11.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1127 Aug 31 21:35  Q12.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1024 Aug 31 21:42  Q13.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1758 Aug 31 21:44  Q14.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  3830 Aug 31 21:47  Q15.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   935 Aug 31 21:50  Q16a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   968 Aug 31 21:52  Q16b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   969 Aug 31 21:55  Q17a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1580 Aug 31 21:57  Q17b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  2958 Aug 31 22:14  Q18a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   996 Aug 31 22:04  Q18createrecord.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   600 Aug 27 12:17  Q18r_lck.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   706 Aug 27 12:06  Q18w_lck.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   945 Aug 31 22:17  Q19.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   732 Aug 31 16:30  Q1a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   788 Aug 31 16:36  Q1b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   710 Aug 31 17:05  Q1c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   137 Aug 27 22:07  Q1c.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   978 Aug 31 22:20  Q20.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   919 Aug 31 22:25  Q21.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1189 Aug 31 22:27  Q22.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1072 Aug 31 22:29  Q23.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1046 Aug 31 22:32  Q24.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1391 Aug 31 22:36  Q25.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   310 Aug 27 14:14  Q26b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   915 Aug 31 22:41  Q26.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   202 Aug 27 13:54  Q26.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   101 Aug 31 15:16  Q26_tar.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16556 Aug 31 22:45  Q27a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16625 Aug 31 22:50  Q27b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 57286 Aug 31 23:34  Q27c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:23  Q27c.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16610 Aug 31 23:22  Q27d.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   397 Aug 31 23:36  Q27e.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   828 Aug 31 23:12  Q28.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1546 Aug 31 23:16  Q29.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   521 Aug 31 18:54  Q2.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1572 Aug 31 16:13  Q30.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   849 Aug 27 16:09  Q30.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   734 Aug 31 19:20  Q3.cpp
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 19:17  Q3.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   943 Aug 31 19:24  Q4.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 25 10:06  Q4.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1178 Aug 31 23:30  Q5.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   805 Aug 31 19:33  Q6.cpp
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16744 Aug 25 17:18  Q7
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   960 Aug 31 19:36  Q7.cpp
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 24576 Aug 25 17:44  Q8
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   778 Aug 31 19:39  Q8.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1708 Aug 31 19:41  Q9.cpp
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 24576 Aug 25 17:36  readf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    24 Aug 31 22:00  Rec.dat
lrwxrwxrwx 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     7 Aug  8 09:25  sample -> file2.c
drwx------ 5 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 25 13:55  snap
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Aug 31 19:13  ss
-rw-rw-r-- 2 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 27 21:57  target.txt
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 11 19:56  Templates
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 25 21:04  test.txt
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:29  Three.txt
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 23:29  Two.txt
drwxr-xr-x 3 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Jul 28 11:56  Videos

./code:
total 0

./Desktop:
total 1960
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  41314 Aug 11 15:59 'Algo practice sheet.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  92282 Jul 21 10:16  CandidateFeeStatus_NIT2415809.pdf
drwxrwxr-x 3 shivani-sanjiv-shukla shivani-sanjiv-shukla   4096 Aug 22 10:35  domjudge_Qs
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1179 Aug  8 08:27  exampls.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 488094 Aug 25 22:17 'Linux imp code.odt'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  18401 Jul 25 16:07 'lock choices of utkarsh'
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla   4096 Aug 31 23:34  MT2024146
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 137167 Jul 20 12:58  MT2024146.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  45219 Aug  4 17:06  My_Resume-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  45082 Aug  4 17:57  My_Resume-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  42352 Aug  4 16:21  My_Resume.pdf
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla   4096 Aug 22 19:07 'New Folder'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 253846 Jul 30 10:53 'Sanjiv Shukla income-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  35237 Jul 22 21:09 'Shivani Sanjiv Shukla'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  33304 Jul 22 21:15 'Shivani Sanjiv Shukla.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  65485 Jul 21 00:25 'Shivani Shukla.odg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  70165 Jul 21 00:24 'Shivani Shukla.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  18494 Jul 21 00:29 'Shivani Shukla Resume.docx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  35240 Aug  4 13:41 'Shivani Shukla Resume.docx - hit and try resume-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  65736 Jul 21 00:23 'Shivani Shukla Resume.odg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  70199 Jul 20 23:59 'Shivani Shukla Resume.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  68671 Jul 21 17:28 'Shiv Resume.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 164383 Jul 21 10:03 'Utkarsh offer letter.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 151454 Jul 30 10:53 'Utkarsh Sanjiv Shukla EWS.pdf'

./Desktop/domjudge_Qs:
total 332
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla  4096 Aug 22 10:35  __MACOSX
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 90366 Aug 21 13:52 'prob-Digit Frequency.pdf'
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 85810 Aug 21 13:52 'prob-Kth Largest Number.pdf'
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 75608 Aug 21 13:52 'prob-Lagged Fibo Sequence.pdf'
-rw-r--r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 77119 Aug 21 13:52 'prob-Lattice Points Count.pdf'

./Desktop/domjudge_Qs/__MACOSX:
total 0

./Desktop/MT2024146:
total 252
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1110 Aug 31 19:44 Q10.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1246 Aug 31 19:50 Q11.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1127 Aug 31 21:35 Q12.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1024 Aug 31 21:42 Q13.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1758 Aug 31 21:44 Q14.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  3830 Aug 31 21:47 Q15.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   935 Aug 31 21:50 Q16a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   968 Aug 31 21:52 Q16b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   969 Aug 31 21:55 Q17a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1580 Aug 31 21:57 Q17b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  2958 Aug 31 22:14 Q18a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   945 Aug 31 22:17 Q19.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   732 Aug 31 16:30 Q1a.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   788 Aug 31 16:36 Q1b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   710 Aug 31 17:05 Q1c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   978 Aug 31 22:20 Q20.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   919 Aug 31 22:25 Q21.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1189 Aug 31 22:27 Q22.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1072 Aug 31 22:29 Q23.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1046 Aug 31 22:32 Q24.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1391 Aug 31 22:36 Q25.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   915 Aug 31 22:41 Q26.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16556 Aug 31 22:45 Q27a.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16625 Aug 31 22:50 Q27b.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 57286 Aug 31 23:34 Q27c.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 16610 Aug 31 23:17 Q27d.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   828 Aug 31 23:12 Q28.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1546 Aug 31 23:16 Q29.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  6019 Aug 31 19:13 Q2.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1572 Aug 31 16:13 Q30.c
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   734 Aug 31 19:20 Q3.cpp
-rw------- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 31 19:17 Q3.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   943 Aug 31 19:24 Q4.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     0 Aug 25 10:06 Q4.txt
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1178 Aug 31 23:30 Q5.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   805 Aug 31 19:33 Q6.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   960 Aug 31 19:36 Q7.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   778 Aug 31 19:39 Q8.cpp
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  1708 Aug 31 19:41 Q9.cpp

'./Desktop/New Folder':
total 0

./Documents:
total 0

./Downloads:
total 811304
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1179155 Jul 29 23:57 '10th marksheet utkarsh-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1179155 Jul 30 10:09 '10th marksheet utkarsh-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     88525 Jul 30 00:25 '10th marksheet utkarsh_compressed-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    395292 Jul 30 00:19 '10th marksheet utkarsh_compressed_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    396875 Jul 30 00:18 '10th marksheet utkarsh_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1179155 Jul 29 23:34 '10th marksheet utkarsh.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    735231 Jul 30 16:42 '11 Ann 5 Academic Integrity Policy IIITB_Draft V4 Senate-1 (1).pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1154272 Jul 30 00:28 '12th marksheet.odg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     74478 Jul 30 00:29  12th.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17739 Jul 20 20:19  2022_Placement_Committee___Resume_Template_Type_1.docx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     62453 Jul 20 20:15  2022_Placement_Committee___Resume_Template_Type_1.odg
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    136313 Jul 20 12:44  2022_Placement_Committee___Resume_Template_Type_1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     61552 Aug  4 09:39  2022_Placement_Committee___Resume_Template_Type_3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 390964540 Aug 15 12:39  20240815_114423.mp4
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    867815 Jul 30 11:07  368217602914948-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    867815 Jul 30 09:30  368217602914948.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12202166 Jul 27 20:32 '541ebe7427a54888b7c007d546614250 (1).mov'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12202166 Jul 27 20:32 '541ebe7427a54888b7c007d546614250 (2).mov'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12202166 Jul 27 20:32  541ebe7427a54888b7c007d546614250.mov
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    384061 Jul 25 13:51  60558.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    646798 Jul 27 20:31  649EFCE0-25CE-41F6-8B56-318936D34FD0.jpg
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    700315 Jul 27 20:31  718B64F9-D395-4A6C-A834-536E996FE016.jpg
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    662438 Jul 27 20:32  84FC75C3-696B-4A92-8CC9-20F5159EFCA5.jpg
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2616527 Aug 22 17:55  Algo24Aug14.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2947287 Aug 22 17:55  Algo24Aug5.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3261057 Aug 22 17:55  Algo24Aug7.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     57406 Aug 22 17:54  Algo24.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  13730215 Aug 18 16:01  Algo_PS1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3770236 Aug 16 18:55  AlgoPS_8-11.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    932955 Aug 22 17:55 'Algorithms Content-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    932955 Aug 22 17:54 'Algorithms Content.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    667031 Aug  4 16:33 'all three year gatescore-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    667031 Aug  4 16:33 'all three year gatescore-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    667031 Jul 27 14:17 'all three year gatescore.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    128378 Jul 27 20:42 'Application for navyoday.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    121110 Jul 30 11:04 'Application of utkarsh.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     16261 Jul 20 22:36 'ATS COMPATIBLE RESUME FORMAT(1).docx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     16261 Jul 20 22:36 'ATS COMPATIBLE RESUME FORMAT.docx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1011147 Jul 27 20:38 'bABY ADHAAR CARD'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2113186 Aug 17 21:31  BE_Marsheets.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    122077 Jul 21 10:15  CandidateFeeStatus_NIT2415809.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     73305 Aug 17 14:00  Cllg_ID.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   5094471 Jul 27 14:24  CS24S62075107_ScoreCard.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    190808 Aug 22 17:54  C++_STL.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  53898812 Aug 31 17:51  delhi-bus-routes.kml
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    920410 Aug 31 17:45  delhi_traffic_signals.kml
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  14371294 Aug 20 08:57  DM3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    159458 Aug 20 08:57  DM4.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    187413 Aug 20 08:57  DM-5.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    844001 Aug 20 08:57 'DM(Sets)2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1907536 Jul 30 01:12 'DocScanner 10-Jul-2024 00-33.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    320373 Jul 30 01:10 'DocScanner 17-Jun-2024 19-38-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    320373 Jul 30 10:59 'DocScanner 17-Jun-2024 19-38-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    320373 Jul 29 23:35 'DocScanner 17-Jun-2024 19-38.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    783032 Jul 29 23:35 'DocScanner 17-Jun-2024 20-03.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    644792 Jul 30 10:08 'DocScanner 29-Jul-2024 23-45-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    644792 Jul 29 23:47 'DocScanner 29-Jul-2024 23-45.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     74478 Jul 30 00:29 'DocScanner 29-Jul-2024 23-47-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1060750 Jul 30 10:08 'DocScanner 29-Jul-2024 23-47-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1060750 Jul 30 00:26 'DocScanner 29-Jul-2024 23-47.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     73305 Aug 17 14:01 'DocScanner Aug 17, 2024 13-59-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    239850 Aug  6 16:31 'DocScanner Aug 6, 2024 16-29.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    199178 Jul 27 14:21 'DocScanner Jul 27, 2024 14-20.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     37794 Jul 27 14:26 'DocScanner Jul 27, 2024 14-26.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    317272 Aug 22 10:34  domjudge_Qs.zip
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    981716 Aug 19 12:27  EAadhaar_0000001924126720240221062205_19082024122755.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1011147 Jul 27 20:36  EAadhaar_0229270320116520221205170219_27072024203634.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    303592 Aug 22 17:53 'Finance for Engineers.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     21777 Aug 22 18:05  Flipkart_assigned_rooms.xlsx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     43192 Aug 22 19:02  Git.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 109166380 Jul 25 14:22  google-chrome-stable_current_amd64.deb
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     97243 Aug 17 21:28 'graduation passing certificate -1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     97243 Aug 17 14:12 'graduation passing certificate .pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug 22 21:15 'Hands-on List 1-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug 25 09:30 'Hands-on List 1-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug 26 22:29 'Hands-on List 1-3.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug 27 21:53 'Hands-on List 1-4.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug 29 09:05 'Hands-on List 1-5.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    429969 Aug  8 09:02 'Hands-on List 1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    424747 Aug 26 22:29 'Hands-on List II.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     68671 Jul 22 21:09 'hit and try resume-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     68671 Aug  4 13:41 'hit and try resume-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     68671 Jul 21 22:39 'hit and try resume.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     63380 Jul 30 11:00 'idof utkarsh_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2663162 Jul 30 11:00 'idof utkarsh.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     49152 Aug 29 20:37 'IIIT Bangalore - Summer Internship - Online Assessment Shortlist - 2026 Batch - 2 Sept 2024.xls'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1367650 Jul 27 20:31  IMG_6435.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1131492 Jul 27 20:31  IMG_6437.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2088666 Jul 27 20:31  IMG_6439.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2203330 Jul 27 20:31  IMG_6440.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2171347 Jul 27 20:31  IMG_6441.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2134401 Jul 27 20:31  IMG_6442.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1808180 Jul 27 20:30  IMG_6444.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2777527 Jul 27 20:30  IMG_6450.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3048491 Jul 27 20:30  IMG_6452.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2668287 Jul 27 20:30  IMG_6453.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  13275906 Jul 27 20:30  IMG_6463.MOV
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2236953 Jul 27 20:30  IMG_6465.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2355987 Jul 27 20:29  IMG_6466.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2332453 Jul 27 20:29  IMG_6467.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2749500 Jul 27 20:29  IMG_6469.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2843292 Jul 27 20:29  IMG_6470.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1720262 Jul 27 20:29  IMG_6473.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1711674 Jul 27 20:28  IMG_6474.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1449669 Jul 27 20:28  IMG_6475.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1974684 Jul 27 20:28  IMG_6481.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2084157 Jul 27 20:28  IMG_6488.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1245636 Jul 27 20:28  IMG_6489.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2421435 Jul 27 20:28  IMG_6492.HEIC
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    230905 Aug 20 08:57  lec1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    548764 Aug 27 11:33  Lecture_Plan_MathML_Part_1_Aug24.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    677988 Aug  8 09:52  LinuxBasicCommands.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3570267 Aug 21 20:31  Machine_Learning_2024_Class1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2636378 Aug 22 10:36  Machine_Learning_2024_Class2-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2636378 Aug 21 20:31  Machine_Learning_2024_Class2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3840508 Aug 22 14:50  Machine_Learning_2024_Class3-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3840508 Aug 23 20:02  Machine_Learning_2024_Class3-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3840508 Aug 24 13:27  Machine_Learning_2024_Class3-3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3840508 Aug 21 20:31  Machine_Learning_2024_Class3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2688983 Aug 24 17:08  Machine_Learning_2024_Class4-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2688983 Aug 27 20:44  Machine_Learning_2024_Class4-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2688983 Aug 28 21:23  Machine_Learning_2024_Class4-3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2688983 Aug 21 20:31  Machine_Learning_2024_Class4.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2752266 Aug 29 00:34  Machine_Learning_2024_Class5-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2752266 Aug 29 14:45  Machine_Learning_2024_Class5-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2752266 Aug 21 20:31  Machine_Learning_2024_Class5.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2337059 Aug 30 11:51  Machine_Learning_2024_Class6-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   2337059 Aug 21 20:31  Machine_Learning_2024_Class6.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1408997 Aug 30 13:08  Machine_Learning_2024_Class7.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   3088169 Aug 30 13:19  Machine_Learning_2024_Class8.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1966814 Jul 25 13:51 'MCA FEE STRUCTURE 2024-25 Regular.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     83504 Aug 28 15:27  ML_midterm_project_requirements.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    103223 Jul 20 20:03  MT2023161-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    103223 Jul 20 12:41  MT2023161.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    134054 Aug 19 15:31  MT2024146.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    133268 Aug  4 17:05  My_Resume-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    132853 Aug  4 17:57  My_Resume-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    132998 Aug  4 18:02  My_Resume-3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    133695 Aug  4 18:22  My_Resume-4.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    134131 Aug  4 18:28  My_Resume-5.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    134023 Aug 19 15:24  My_Resume-6-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    134023 Aug  5 16:10  My_Resume-6.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    121965 Aug  4 16:21  My_Resume.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    134052 Aug  6 11:20 'old resume.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 18:02 'Preptemschedule2024(1).xlsx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 18:17 'Preptemschedule2024(2).xlsx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 18:17 'Preptemschedule2024(3).xlsx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 18:23 'Preptemschedule2024(4).xlsx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 18:23 'Preptemschedule2024(5).xlsx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17325 Jul 14 17:59  Preptemschedule2024.xlsx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    119837 Jul 14 18:00  PrepTermMtechECE2024-v2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug  9 14:29  ProblemSet1-1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 11 11:39  ProblemSet1-2.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 14 15:45  ProblemSet1-3.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 14 23:48  ProblemSet1-4.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 15 09:47  ProblemSet1-5.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 22 17:53  ProblemSet1-6.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug 24 20:40  ProblemSet1-7.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    104210 Aug  9 14:29  ProblemSet1.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla      7339 Aug 19 15:42  Roomallocation.xlsx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     10901 Jul 31 12:12  sample1722408179486.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     22937 Jul 30 01:09 'Sanjiv Shukla income_11zon.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    189116 Jul 30 10:55 'Sanjiv Shukla income-1_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    155216 Jul 30 10:53 'Sanjiv Shukla income-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    155216 Jul 30 01:00 'Sanjiv Shukla income.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1907536 Jul 29 23:47 'Semester wise result pdf-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1907536 Jul 30 09:53 'Semester wise result pdf-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    193599 Jul 30 01:06 'Semester wise result pdf_compressed_11zon.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    313392 Jul 30 00:53 'Semester wise result pdf_compressed-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    313392 Jul 30 01:01 'Semester wise result pdf_compressed-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    313392 Jul 30 01:01 'Semester wise result pdf_compressed-3.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    313392 Jul 30 00:53 'Semester wise result pdf_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   1907536 Jul 29 23:34 'Semester wise result pdf.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    981716 Aug 19 12:28 'Shivani Adhaar Card.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    237807 Jul 21 00:36 'Shivani Shukla Resume-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    237807 Jul 21 00:42 'Shivani Shukla Resume-2.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    237807 Jul 21 16:57 'Shivani Shukla Resume-3.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    614795 Jul 20 23:56 'Shivani Shukla Resume.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    291235 Aug 23 23:09 'SIH2024_IDEA_Presentation_Format(1).pptx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    291235 Aug 30 15:59 'SIH2024_IDEA_Presentation_Format(2).pptx'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    291179 Aug 16 00:17  SIH2024_IDEA_Presentation_Format.pptx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  11981912 Aug  6 13:57  SS.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     17478 Aug 31 15:32  ThoughtSpot_AssignedRooms.xlsx
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     43528 Jul 30 10:41 'to be submitted.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   6535105 Aug 21 20:30  Tutorial_01.ipynb
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    253008 Jul 22 13:31 'Unipage Calendar 2024 (4).pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     44681 Jul 30 10:54 'Utkarsh Sanjiv Shukla EWS_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    137423 Jul 30 10:52 'Utkarsh Sanjiv Shukla EWS.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    144384 Jul 30 00:16 'Utkarsh Score Card-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     61247 Jul 30 00:18 'Utkarsh Score Card_compressed-1.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     61247 Jul 30 00:17 'Utkarsh Score Card_compressed.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    144384 Jul 29 23:24 'Utkarsh Score Card.pdf'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   7835120 Aug 22 11:07  vmls.pdf
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     67407 Jul 30 10:19 'WhatsApp Image 2024-06-17 at 19.23.29(1).jpeg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     67407 Jul 30 10:19 'WhatsApp Image 2024-06-17 at 19.23.29.jpeg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     43528 Jul 30 10:42 'WhatsApp Image 2024-07-30 at 10.41.30(1).jpeg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     69768 Aug 17 13:56 'WhatsApp Image 2024-08-17 at 13.56.17(1).jpeg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     69768 Aug 17 13:56 'WhatsApp Image 2024-08-17 at 13.56.17.jpeg'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla     45114 Aug 19 15:40 'WhatsApp Image 2024-08-19 at 15.40.38.jpeg'

./Music:
total 0

./Pictures:
total 12
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 12288 Aug 31 18:47 Screenshots

./Pictures/Screenshots:
total 15852
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 111212 Jul 14 17:48 'Screenshot from 2024-07-14 17-48-11.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  70191 Jul 14 18:15 'Screenshot from 2024-07-14 18-15-25.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  54157 Jul 16 22:27 'Screenshot from 2024-07-16 22-27-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 142363 Jul 18 05:42 'Screenshot from 2024-07-18 05-42-45.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  14617 Jul 18 18:06 'Screenshot from 2024-07-18 18-06-04.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  26626 Jul 18 18:50 'Screenshot from 2024-07-18 18-50-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  40189 Jul 18 18:51 'Screenshot from 2024-07-18 18-51-11.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  38712 Jul 18 18:53 'Screenshot from 2024-07-18 18-53-40.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  24403 Jul 18 20:10 'Screenshot from 2024-07-18 20-10-41.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   4477 Jul 20 19:55 'Screenshot from 2024-07-20 19-55-34.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 141314 Jul 20 19:56 'Screenshot from 2024-07-20 19-56-34.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 153454 Jul 20 19:56 'Screenshot from 2024-07-20 19-56-50.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  38167 Jul 20 20:36 'Screenshot from 2024-07-20 20-36-58.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  46614 Jul 20 21:01 'Screenshot from 2024-07-20 21-01-22.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  17307 Jul 20 23:57 'Screenshot from 2024-07-20 23-57-26.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   4618 Jul 20 23:58 'Screenshot from 2024-07-20 23-58-08.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12130 Jul 21 00:02 'Screenshot from 2024-07-21 00-02-20.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 198184 Jul 21 01:04 'Screenshot from 2024-07-21 01-04-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 255568 Jul 21 01:05 'Screenshot from 2024-07-21 01-05-13.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 183914 Jul 21 09:55 'Screenshot from 2024-07-21 09-55-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 228215 Jul 21 09:56 'Screenshot from 2024-07-21 09-56-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 428400 Jul 21 09:57 'Screenshot from 2024-07-21 09-57-39.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 152131 Jul 21 10:01 'Screenshot from 2024-07-21 10-01-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 174838 Jul 21 10:06 'Screenshot from 2024-07-21 10-06-38.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 140088 Jul 21 10:14 'Screenshot from 2024-07-21 10-14-43.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  83772 Jul 21 17:33 'Screenshot from 2024-07-21 17-33-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  53628 Jul 21 17:34 'Screenshot from 2024-07-21 17-34-35.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  37097 Jul 22 09:41 'Screenshot from 2024-07-22 09-41-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 107309 Jul 22 10:16 'Screenshot from 2024-07-22 10-16-26.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  85843 Jul 22 10:17 'Screenshot from 2024-07-22 10-17-29.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  54813 Jul 22 11:50 'Screenshot from 2024-07-22 11-50-32.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  69391 Jul 22 13:16 'Screenshot from 2024-07-22 13-16-00.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  71860 Jul 22 18:31 'Screenshot from 2024-07-22 18-31-20.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  53795 Jul 22 18:33 'Screenshot from 2024-07-22 18-33-13.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  60926 Jul 25 10:23 'Screenshot from 2024-07-25 10-23-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  29711 Jul 25 13:57 'Screenshot from 2024-07-25 13-57-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 159229 Jul 25 14:50 'Screenshot from 2024-07-25 14-50-48.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 478200 Jul 25 15:57 'Screenshot from 2024-07-25 15-57-10.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 155816 Jul 25 18:26 'Screenshot from 2024-07-25 18-26-56.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 151577 Jul 25 22:57 'Screenshot from 2024-07-25 22-57-58.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 151621 Jul 25 23:02 'Screenshot from 2024-07-25 23-02-08.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  46882 Jul 25 23:02 'Screenshot from 2024-07-25 23-02-42.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 139403 Jul 27 20:48 'Screenshot from 2024-07-27 20-48-36.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 184201 Jul 27 20:48 'Screenshot from 2024-07-27 20-48-58.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 178312 Jul 27 20:49 'Screenshot from 2024-07-27 20-49-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 166980 Jul 27 20:49 'Screenshot from 2024-07-27 20-49-43.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 265928 Jul 29 19:28 'Screenshot from 2024-07-29 19-28-13.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  75338 Jul 29 22:48 'Screenshot from 2024-07-29 22-48-32.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 106171 Jul 29 23:06 'Screenshot from 2024-07-29 23-06-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  81496 Jul 29 23:07 'Screenshot from 2024-07-29 23-07-13.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  96703 Jul 29 23:21 'Screenshot from 2024-07-29 23-21-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 217961 Jul 29 23:24 'Screenshot from 2024-07-29 23-24-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 106968 Jul 29 23:30 'Screenshot from 2024-07-29 23-30-30.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 104129 Jul 29 23:50 'Screenshot from 2024-07-29 23-50-39.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 103281 Jul 29 23:59 'Screenshot from 2024-07-29 23-59-43.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 108818 Jul 30 00:00 'Screenshot from 2024-07-30 00-00-07.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  90328 Jul 30 00:00 'Screenshot from 2024-07-30 00-00-17.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  22089 Jul 30 00:04 'Screenshot from 2024-07-30 00-04-01.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  48508 Jul 30 00:05 'Screenshot from 2024-07-30 00-05-59.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 232688 Jul 30 00:07 'Screenshot from 2024-07-30 00-07-33.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  47165 Jul 30 00:11 'Screenshot from 2024-07-30 00-11-23.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  48462 Jul 30 00:13 'Screenshot from 2024-07-30 00-13-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  47118 Jul 30 00:14 'Screenshot from 2024-07-30 00-14-33.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  68377 Jul 30 01:04 'Screenshot from 2024-07-30 01-04-19.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  70485 Jul 30 01:05 'Screenshot from 2024-07-30 01-05-24.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  70118 Jul 30 01:07 'Screenshot from 2024-07-30 01-07-47.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  94735 Jul 30 01:13 'Screenshot from 2024-07-30 01-13-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 131527 Jul 30 11:01 'Screenshot from 2024-07-30 11-01-57.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  27218 Jul 30 11:16 'Screenshot from 2024-07-30 11-16-56.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  45154 Jul 30 16:22 'Screenshot from 2024-07-30 16-22-39.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 111820 Jul 30 16:33 'Screenshot from 2024-07-30 16-33-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  30426 Jul 30 16:53 'Screenshot from 2024-07-30 16-53-50.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  30426 Jul 30 18:15 'Screenshot from 2024-07-30 18-15-47.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  41707 Jul 30 18:25 'Screenshot from 2024-07-30 18-25-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 120950 Jul 30 18:33 'Screenshot from 2024-07-30 18-33-26.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  53579 Jul 31 11:51 'Screenshot from 2024-07-31 11-51-40.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 133935 Aug  2 19:43 'Screenshot from 2024-08-02 19-43-00.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  86211 Aug  2 19:43 'Screenshot from 2024-08-02 19-43-28.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 288918 Aug  3 10:10 'Screenshot from 2024-08-03 10-10-10.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 228041 Aug  3 10:18 'Screenshot from 2024-08-03 10-18-33.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 140408 Aug  3 17:38 'Screenshot from 2024-08-03 17-38-11.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 148857 Aug  3 17:51 'Screenshot from 2024-08-03 17-51-34.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 137431 Aug  3 23:17 'Screenshot from 2024-08-03 23-17-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 149493 Aug  3 23:19 'Screenshot from 2024-08-03 23-19-30.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 244759 Aug  4 11:03 'Screenshot from 2024-08-04 11-03-37.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 101268 Aug  6 10:34 'Screenshot from 2024-08-06 10-34-35.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  25211 Aug  8 13:06 'Screenshot from 2024-08-08 13-06-03.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  38408 Aug  9 10:32 'Screenshot from 2024-08-09 10-32-10.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  26416 Aug  9 11:17 'Screenshot from 2024-08-09 11-17-59.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  63134 Aug 10 12:31 'Screenshot from 2024-08-10 12-31-07.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  65919 Aug 10 12:33 'Screenshot from 2024-08-10 12-33-22.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  58627 Aug 10 13:30 'Screenshot from 2024-08-10 13-30-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 408948 Aug 10 16:47 'Screenshot from 2024-08-10 16-47-58.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  81124 Aug 10 17:37 'Screenshot from 2024-08-10 17-37-02.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 297915 Aug 10 18:13 'Screenshot from 2024-08-10 18-13-07.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  34045 Aug 10 21:55 'Screenshot from 2024-08-10 21-55-02.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12000 Aug 10 21:58 'Screenshot from 2024-08-10 21-58-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 149160 Aug 13 22:13 'Screenshot from 2024-08-13 22-13-41.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  74156 Aug 13 22:15 'Screenshot from 2024-08-13 22-15-16.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  74152 Aug 13 22:23 'Screenshot from 2024-08-13 22-23-25.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  18422 Aug 13 22:49 'Screenshot from 2024-08-13 22-49-02.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 146881 Aug 14 23:48 'Screenshot from 2024-08-14 23-48-45.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 174839 Aug 14 23:49 'Screenshot from 2024-08-14 23-49-13.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 200225 Aug 14 23:49 'Screenshot from 2024-08-14 23-49-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 214727 Aug 14 23:49 'Screenshot from 2024-08-14 23-49-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 195148 Aug 14 23:50 'Screenshot from 2024-08-14 23-50-07.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 157876 Aug 16 19:20 'Screenshot from 2024-08-16 19-20-32.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 157876 Aug 16 19:21 'Screenshot from 2024-08-16 19-21-28.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  24624 Aug 17 14:03 'Screenshot from 2024-08-17 14-03-20.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  36896 Aug 19 13:15 'Screenshot from 2024-08-19 13-15-42.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  57469 Aug 21 21:27 'Screenshot from 2024-08-21 21-27-39.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 140569 Aug 21 22:08 'Screenshot from 2024-08-21 22-08-46.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 154950 Aug 21 22:12 'Screenshot from 2024-08-21 22-12-39.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  31933 Aug 21 22:27 'Screenshot from 2024-08-21 22-27-24.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 148245 Aug 22 15:20 'Screenshot from 2024-08-22 15-20-40.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 250081 Aug 22 15:20 'Screenshot from 2024-08-22 15-20-57.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 188544 Aug 22 15:21 'Screenshot from 2024-08-22 15-21-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  43730 Aug 24 13:47 'Screenshot from 2024-08-24 13-47-25.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  25890 Aug 25 14:15 'Screenshot from 2024-08-25 14-15-43.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  20473 Aug 25 14:17 'Screenshot from 2024-08-25 14-17-07.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  44527 Aug 25 14:35 'Screenshot from 2024-08-25 14-35-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  13853 Aug 25 15:17 'Screenshot from 2024-08-25 15-17-42.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  32961 Aug 25 15:18 'Screenshot from 2024-08-25 15-18-34.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  89404 Aug 25 17:09 'Screenshot from 2024-08-25 17-09-44.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  76081 Aug 25 17:12 'Screenshot from 2024-08-25 17-12-44.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 107327 Aug 25 18:44 'Screenshot from 2024-08-25 18-44-32.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  71815 Aug 25 18:45 'Screenshot from 2024-08-25 18-45-08.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  86989 Aug 25 20:10 'Screenshot from 2024-08-25 20-10-57.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  29262 Aug 25 20:13 'Screenshot from 2024-08-25 20-13-19.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 117040 Aug 25 22:09 'Screenshot from 2024-08-25 22-09-42.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  35809 Aug 25 22:14 'Screenshot from 2024-08-25 22-14-36.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  62113 Aug 26 20:02 'Screenshot from 2024-08-26 20-02-33.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  41456 Aug 27 13:18 'Screenshot from 2024-08-27 13-18-19.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  98955 Aug 27 13:19 'Screenshot from 2024-08-27 13-19-25.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  21020 Aug 27 14:15 'Screenshot from 2024-08-27 14-15-08.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  43755 Aug 27 14:16 'Screenshot from 2024-08-27 14-16-08.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  30239 Aug 27 14:16 'Screenshot from 2024-08-27 14-16-37.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  36986 Aug 27 16:14 'Screenshot from 2024-08-27 16-14-05.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  77535 Aug 28 00:24 'Screenshot from 2024-08-28 00-24-56.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  24733 Aug 28 22:42 'Screenshot from 2024-08-28 22-42-30.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  24992 Aug 28 22:44 'Screenshot from 2024-08-28 22-44-12.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  20471 Aug 28 22:56 'Screenshot from 2024-08-28 22-56-40.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  59390 Aug 28 22:58 'Screenshot from 2024-08-28 22-58-11.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  20078 Aug 29 20:45 'Screenshot from 2024-08-29 20-45-53.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  56763 Aug 30 11:26 'Screenshot from 2024-08-30 11-26-50.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  42705 Aug 30 11:27 'Screenshot from 2024-08-30 11-27-25.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  76568 Aug 30 11:46 'Screenshot from 2024-08-30 11-46-41.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 157887 Aug 30 12:45 'Screenshot from 2024-08-30 12-45-35.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  68374 Aug 30 14:36 'Screenshot from 2024-08-30 14-36-04.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  34452 Aug 30 14:37 'Screenshot from 2024-08-30 14-37-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 180928 Aug 30 15:13 'Screenshot from 2024-08-30 15-13-02.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  34045 Aug 30 16:39 'Screenshot from 2024-08-30 16-39-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  82901 Aug 30 16:39 'Screenshot from 2024-08-30 16-39-52.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  91985 Aug 30 16:40 'Screenshot from 2024-08-30 16-40-22.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 103340 Aug 31 15:00 'Screenshot from 2024-08-31 15-00-27.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  33488 Aug 31 15:00 'Screenshot from 2024-08-31 15-00-57.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla   9224 Aug 31 15:01 'Screenshot from 2024-08-31 15-01-41.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  27602 Aug 31 15:02 'Screenshot from 2024-08-31 15-02-54.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  12371 Aug 31 15:11 'Screenshot from 2024-08-31 15-11-59.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  14664 Aug 31 15:50 'Screenshot from 2024-08-31 15-50-09.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  18466 Aug 31 17:34 'Screenshot from 2024-08-31 17-34-21.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 127644 Aug 31 17:39 'Screenshot from 2024-08-31 17-39-46.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  20941 Aug 31 18:15 'Screenshot from 2024-08-31 18-15-02.png'
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  17776 Aug 31 18:47 'Screenshot from 2024-08-31 18-47-20.png'

./Public:
total 0

./snap:
total 12
drwxr-xr-x 5 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Aug 18 09:21 firefox
drwxr-xr-x 5 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 12 07:52 snapd-desktop-integration
drwxr-xr-x 4 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 25 13:55 snap-store

./snap/firefox:
total 12
drwxr-xr-x 4 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 27 20:59 4650
drwxr-xr-x 4 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Aug 18 09:21 4757
drwxr-xr-x 4 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 12 07:52 common
lrwxrwxrwx 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    4 Aug 18 09:21 current -> 4757

./snap/firefox/4650:
total 0

./snap/firefox/4757:
total 0

./snap/firefox/common:
total 0

./snap/snapd-desktop-integration:
total 12
drwxr-xr-x 12 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 12 07:52 157
drwxr-xr-x 12 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 12 07:47 83
drwxr-xr-x  3 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 common
lrwxrwxrwx  1 shivani-sanjiv-shukla shivani-sanjiv-shukla    3 Jul 12 07:52 current -> 157

./snap/snapd-desktop-integration/157:
total 32
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Desktop
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Documents
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Downloads
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Music
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Pictures
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Public
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Templates
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Videos

./snap/snapd-desktop-integration/157/Desktop:
total 0

./snap/snapd-desktop-integration/157/Documents:
total 0

./snap/snapd-desktop-integration/157/Downloads:
total 0

./snap/snapd-desktop-integration/157/Music:
total 0

./snap/snapd-desktop-integration/157/Pictures:
total 0

./snap/snapd-desktop-integration/157/Public:
total 0

./snap/snapd-desktop-integration/157/Templates:
total 0

./snap/snapd-desktop-integration/157/Videos:
total 0

./snap/snapd-desktop-integration/83:
total 32
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Desktop
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Documents
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Downloads
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Music
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Pictures
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Public
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Templates
drwxr-xr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 11 19:56 Videos

./snap/snapd-desktop-integration/83/Desktop:
total 0

./snap/snapd-desktop-integration/83/Documents:
total 0

./snap/snapd-desktop-integration/83/Downloads:
total 0

./snap/snapd-desktop-integration/83/Music:
total 0

./snap/snapd-desktop-integration/83/Pictures:
total 0

./snap/snapd-desktop-integration/83/Public:
total 0

./snap/snapd-desktop-integration/83/Templates:
total 0

./snap/snapd-desktop-integration/83/Videos:
total 0

./snap/snapd-desktop-integration/common:
total 0

./snap/snap-store:
total 8
drwxr-xr-x 4 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 25 13:55 1113
drwxr-xr-x 3 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 25 13:55 common
lrwxrwxrwx 1 shivani-sanjiv-shukla shivani-sanjiv-shukla    4 Jul 25 13:55 current -> 1113

./snap/snap-store/1113:
total 0

./snap/snap-store/common:
total 0

./ss:
total 24
-rwxrwxr-x 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 15960 Aug 31 19:07 Q2
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla  6019 Aug 31 19:13 Q2.c

./Templates:
total 0

./Videos:
total 4
drwxrwxr-x 2 shivani-sanjiv-shukla shivani-sanjiv-shukla 4096 Jul 28 12:02 Webcam

./Videos/Webcam:
total 0
-rw-rw-r-- 1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Jul 28 11:59 2024-07-28-115920.webm
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ 

*/

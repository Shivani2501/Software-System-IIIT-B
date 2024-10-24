
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main() {
    int pipe_ls_grep[2];  
    int pipe_grep_wc[2];  
    pid_t pid1, pid2;

        if (pipe(pipe_ls_grep) == -1) {
        perror("pipe failed");
        exit(EXIT_FAILURE);
    }

    
    pid1 = fork();
    if (pid1 == -1) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid1 == 0) {
    
        close(pipe_ls_grep[0]);

      
        dup2(pipe_ls_grep[1], STDOUT_FILENO);

       
        close(pipe_ls_grep[1]);

        
        execlp("ls", "ls", "-l", NULL);

        
        perror("execlp ls failed");
        exit(EXIT_FAILURE);
    }

        if (pipe(pipe_grep_wc) == -1) {
        perror("pipe failed");
        exit(EXIT_FAILURE);
    }

    
    pid2 = fork();
    if (pid2 == -1) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid2 == 0) {
        
        close(pipe_ls_grep[1]);

      
        dup2(pipe_ls_grep[0], STDIN_FILENO);

      
        close(pipe_ls_grep[0]);

      
        close(pipe_grep_wc[0]);

      
        dup2(pipe_grep_wc[1], STDOUT_FILENO);

       
        close(pipe_grep_wc[1]);

       
        execlp("grep", "grep", "^d", NULL);

       
        perror("execlp grep failed");
        exit(EXIT_FAILURE);
    }

  
    close(pipe_ls_grep[0]);
    close(pipe_ls_grep[1]);
    close(pipe_grep_wc[1]);

    
    dup2(pipe_grep_wc[0], STDIN_FILENO);

        close(pipe_grep_wc[0]);

    
    execlp("wc", "wc", "-l", NULL);

        perror("execlp wc failed");
    exit(EXIT_FAILURE);

    return 0;
}
/*Output
0
*/

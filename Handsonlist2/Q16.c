#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main (){
	int pipe_parent_to_child[2];
	int pipe_child_to_parent[2];
	pid_t pid;
	char parent_msg[]="Message from parent to child";
	char child_msg[]="Message from child to parent";
	char read_buffer[100];
	if(pipe(pipe_parent_to_child)==-1){
		perror("Pipe failed");
		exit(EXIT_FAILURE);
	}
	if(pipe(pipe_child_to_parent)==-1){
		perror("Pipe failed");
		exit(EXIT_FAILURE);
	}
	pid=fork();
	if(pid==-1){
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	if(pid==0){
		close(pipe_parent_to_child[1]);
		close(pipe_child_to_parent[0]);
		read(pipe_parent_to_child[0],read_buffer,sizeof(read_buffer));
		printf("child process received: %s\n",read_buffer);
		write(pipe_child_to_parent[1],child_msg,strlen(child_msg)+1);
		close(pipe_parent_to_child[0]);
		close(pipe_child_to_parent[1]);
	}
	else{
		close(pipe_parent_to_child[0]);
		close(pipe_child_to_parent[1]);
		write(pipe_parent_to_child[1],parent_msg,strlen(parent_msg)+1);
		read(pipe_child_to_parent[0],read_buffer,sizeof(read_buffer));
		printf("Parent process received: %s\n",read_buffer);
		close(pipe_parent_to_child[1]);
		close(pipe_child_to_parent[0]);
		wait(NULL);
	}
	return 0;
}
/* Output
child process received: Message from parent to child
Parent process received: Message from child to parent
*/

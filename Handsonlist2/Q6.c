/*
============================================================================
Name : 6.c
Author : Shivani Shukla
Description : Write a simple program to create three threads.
system call. Use time stamp counter.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void * thread_function(void* arg){
	int thread_num=*((int*)arg);
	printf("Hello from thread %d!\n",thread_num); 
	return NULL;
}
int main (){
	pthread_t threads[3];
	int thread_args[3];
	int result_code;

	for(int i=0;i<3;i++){
		thread_args[i]=i+1;
		result_code=pthread_create(&threads[i],NULL,thread_function,&thread_args[i]);
		if(result_code){
			printf("Error creating thread %d. Return code: %d\n",i+1,result_code);
			exit(EXIT_FAILURE);
		}
	}
	for(int i=0;i<3;i++){
		thread_args[i]=i+1;
		result_code=pthread_create(&threads[i],NULL,thread_function,&thread_args[i]);
		if(result_code){
			printf("Error creating thread %d. Return code: %d\n",i+1,result_code);
			exit(EXIT_FAILURE);
			}
		}
		for(int i=0;i<3;i++){
			pthread_join(threads[i],NULL);
		}
		printf("All thraeds finished.\n");
	return 0;
	}
/* Output
Hello from thread 1!
Hello from thread 3!
Hello from thread 2!
Hello from thread 1!
Hello from thread 2!
Hello from thread 3!
All thraeds finished.
*/

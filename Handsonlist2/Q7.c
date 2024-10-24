#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
 
void* thread_function(void* arg){
	int thread_num=*((int*)arg);
	printf("Hello from thraed %d ! Thread ID: %lu\n", thread_num,pthread_self());
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
			printf("error creating thread %d.Return code: %d\n",i+1,result_code);
			exit(EXIT_FAILURE);
		}
	}
	for(int i=0;i<3;i++){
		pthread_join(threads[i],NULL);
		printf("Thraeds %d has finished. thraeds ID: %lu\n",i+1,threads[i]);
		}
	printf("all threads finished.\n");
	return 0;
}
/* Output
Hello from thraed 1 ! Thread ID: 139852202899136
Hello from thraed 2 ! Thread ID: 139852194506432
Thraeds 1 has finished. thraeds ID: 139852202899136
Thraeds 2 has finished. thraeds ID: 139852194506432
Hello from thraed 3 ! Thread ID: 139852186113728
Thraeds 3 has finished. thraeds ID: 139852186113728
all threads finished.
*/


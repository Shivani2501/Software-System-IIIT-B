/*Name : 30a.c
Author : Shivani Shukla
Description : Write a program to create a shared memory.
a. write some data to the shared memory
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
void main()
{
    key_t key = ftok(".", 2);
    // shared memory created
    int shmid = shmget(key, 1024, IPC_CREAT | 0744);
    // attach shared memory to process adress space
    char *data;
    data = shmat(shmid, (void *)0, 0);
    printf("write in shared memory\n");
    scanf("%[^\n]", data);

    printf("data from shared memory : %s\n", data);
}
/* Output
write in shared memory
hi
data from shared memory : hi
*/

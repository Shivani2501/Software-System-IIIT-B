/*Name : 31.c
Author : Shivani Shukla
Description : Write a program to create a semaphore and initialize value to the semaphore.
a. create a binary semaphore
b. create a counting semaphore
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <unistd.h>

#define BINARY_SEM_KEY 1234      // Key for the binary semaphore
#define COUNTING_SEM_KEY 1235    // Key for the counting semaphore

int create_and_initialize_semaphore(int initial_value, int semaphore_key) {
    int semid;

    // Create the semaphore using the provided key
    semid = semget(semaphore_key, 1, IPC_CREAT | 0666);
    if (semid == -1) {
        perror("semget");
        exit(1);
    }

    // Initialize the semaphore value
    if (semctl(semid, 0, SETVAL, initial_value) == -1) {
        perror("semctl - SETVAL");
        exit(1);
    }

    return semid;
}

int main() {
    int binary_semid, counting_semid;

    // Create and initialize the binary semaphore
    binary_semid = create_and_initialize_semaphore(1, BINARY_SEM_KEY);
    printf("Binary Semaphore created with ID: %d and initialized to 1\n", binary_semid);

    // Create and initialize the counting semaphore
    counting_semid = create_and_initialize_semaphore(5, COUNTING_SEM_KEY);
    printf("Counting Semaphore created with ID: %d and initialized to 5\n", counting_semid);

    // Remove the binary semaphore
    if (semctl(binary_semid, 0, IPC_RMID) == -1) {
        perror("semctl - IPC_RMID for binary semaphore");
    } else {
        printf("Binary Semaphore removed successfully.\n");
    }

    // Remove the counting semaphore
    if (semctl(counting_semid, 0, IPC_RMID) == -1) {
        perror("semctl - IPC_RMID for counting semaphore");
    } else {
        printf("Counting Semaphore removed successfully.\n");
    }

    return 0;
}
/* Output
Binary Semaphore created with ID: 1 and initialized to 1
Counting Semaphore created with ID: 2 and initialized to 5
Binary Semaphore removed successfully.
Counting Semaphore removed successfully.
*/

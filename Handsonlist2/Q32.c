#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define SEM_KEY 1234          
#define SHM_SIZE 1024         
#define NUM_TICKETS 10        
#define NUM_RESOURCES 2       

void sem_wait(int semid) {
    struct sembuf sb;
    sb.sem_num = 0;     
    sb.sem_op = -1;     
    sb.sem_flg = 0;     
    if (semop(semid, &sb, 1) == -1) {
        perror("semop - wait");
        exit(1);
    }
}


void sem_signal(int semid) {
    struct sembuf sb;
    sb.sem_num = 0;     
    sb.sem_op = 1;      
    sb.sem_flg = 0;     
    if (semop(semid, &sb, 1) == -1) {
        perror("semop - signal");
        exit(1);
    }
}

int create_and_initialize_semaphore(int initial_value) {
    int semid = semget(SEM_KEY, 1, IPC_CREAT | 0666);
    if (semid == -1) {
        perror("semget");
        exit(1);
    }
    if (semctl(semid, 0, SETVAL, initial_value) == -1) {
        perror("semctl - SETVAL");
        exit(1);
    }
    return semid;
}

int main() {
    
    int semid = create_and_initialize_semaphore(1);  
    int i;

    printf("Ticket number generation using semaphore:\n");
    for (i = 1; i <= NUM_TICKETS; i++) {
        sem_wait(semid);  
        printf("Generated ticket number: %d\n", i);
        sleep(1);  
        sem_signal(semid);  
    }

    
    int shmid = shmget(IPC_PRIVATE, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }
    char *shm_ptr = shmat(shmid, NULL, 0);
    if (shm_ptr == (char *)-1) {
        perror("shmat");
        exit(1);
    }

    printf("\nWriting to shared memory:\n");
    for (i = 0; i < 5; i++) {
        sem_wait(semid);  
        sprintf(shm_ptr, "Message %d", i + 1);
        printf("Written to shared memory: %s\n", shm_ptr);
        sleep(1);  
        sem_signal(semid);  
    }

    
    int resource_semid = create_and_initialize_semaphore(NUM_RESOURCES);  
    printf("\nUsing counting semaphore for resources:\n");
    for (i = 0; i < 5; i++) {
        sem_wait(resource_semid);  
        printf("Accessing resource %d\n", i + 1);
        sleep(2);  
        sem_signal(resource_semid);     }

    
    if (shmdt(shm_ptr) == -1) {
        perror("shmdt");
    }
    if (shmctl(shmid, IPC_RMID, NULL) == -1) {
        perror("shmctl - IPC_RMID");
    }
    if (semctl(semid, 0, IPC_RMID) == -1) {
        perror("semctl - IPC_RMID for ticket semaphore");
    }
    if (semctl(resource_semid, 0, IPC_RMID) == -1) {
        perror("semctl - IPC_RMID for resource semaphore");
    }

    printf("\nCleaned up semaphores and shared memory.\n");

    return 0;
}
/* Output
Ticket number generation using semaphore:
Generated ticket number: 1
Generated ticket number: 2
Generated ticket number: 3
Generated ticket number: 4
Generated ticket number: 5
Generated ticket number: 6
Generated ticket number: 7
*/


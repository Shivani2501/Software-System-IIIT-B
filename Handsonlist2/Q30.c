#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SHM_SIZE 1024  

int main() {
    key_t key;
    int shmid;
    char *data;
    
    
    key = ftok("shmfile", 65);  
    if (key == -1) {
        perror("ftok");
        exit(1);
    }

    
    shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    
    data = (char *)shmat(shmid, NULL, 0);
    if (data == (char *)-1) {
        perror("shmat");
        exit(1);
    }

    
    printf("Writing to shared memory: 'Hello, Shared Memory!'\n");
    strcpy(data, "Hello, Shared Memory!");

    
    if (shmdt(data) == -1) {
        perror("shmdt");
        exit(1);
    }

    
    data = (char *)shmat(shmid, NULL, SHM_RDONLY);
    if (data == (char *)-1) {
        perror("shmat (O_RDONLY)");
        exit(1);
    }

    
    printf("Trying to overwrite in read-only mode...\n");
    if (strcpy(data, "Trying to overwrite") == (char *)-1) {
        perror("strcpy");
    } else {
        printf("Overwrite succeeded (this shouldn't happen in O_RDONLY mode)\n");
    }

    
    if (shmdt(data) == -1) {
        perror("shmdt");
        exit(1);
    }

    
    if (shmctl(shmid, IPC_RMID, NULL) == -1) {
        perror("shmctl (IPC_RMID)");
        exit(1);
    }

    printf("Shared memory removed successfully.\n");

    return 0;
}


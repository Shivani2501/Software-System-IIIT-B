/*Name : 29.c
Author : Shivani Shukla
Description :  Write a program to remove the message queue.
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Define the key for the message queue
    key_t key;
    int msgid;
    const char *filepath = "progfile";

    // Check if the file exists, if not create it
    int fd = open(filepath, O_CREAT | O_RDONLY, 0666);
    if (fd == -1) {
        perror("open");
        exit(1);Message queue with ID 0 has been removed successfully.

    }
    close(fd);  // Close the file as we just need to ensure its existence

    // Generate a unique key for the message queue
    key = ftok(filepath, 65);  // Using the created file
    if (key == -1) {
        perror("ftok");
        exit(1);
    }

    // Create a message queue if it doesn't exist (IPC_CREAT flag)
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    // Remove the message queue
    if (msgctl(msgid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }

    printf("Message queue with ID %d has been removed successfully.\n", msgid);

    return 0;
}
/* Output
Message queue with ID 0 has been removed successfully.
*/

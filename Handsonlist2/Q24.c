/*Name : 24.c
Author : Shivani Shukla
Description : Write a program to create a message queue and print the key and message queue id.
Date: 21th Sep, 2024.
    */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

typedef struct mesg_buffer
{
    /* data */
    long mesg_type;
    char mesg_text[100];
} mesg_buffer;
int main()
{
    /* code */
    mesg_buffer message;
    // generate unique no
    key_t key = ftok(".", 1); // projext path is current directory and project id=1
    printf("Key for given path and project id is :%d \n", key);
    // create massage queue using msgget
    //  msgget creates a message queue
    //  and returns identifier
    int msgid = msgget(key, 0666 | IPC_CREAT);
    printf("Message queue id : %d\n", msgid);
    return 0;
}
/* Output
Key for given path and project id is :17170803 
Message queue id : 1
*/

/*
============================================================================
Name : 18.c
Author : Shivani Sanjiv Shukla
Description :Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.
Date: 31st Aug, 2024.
============================================================================
*/


#include<iostream>
#include<fstream>
using namespace std;
struct Rec{
	int id;
	int value;
};
int main(){
	const char *name ="Rec.dat";
	Rec records[3]={
		{1,100},
		{2,200},
		{3,300}
	};
	ofstream file(name ,ios::binary);
	for(const auto& record:records){
		file.write(reinterpret_cast<const char *>(&record),sizeof(record));
	}
	file.close();
	cout<<"Records are created. "<<endl;
	return 0;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q18a.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Records are created.
*/


#include<cstring>
using namespace std;
 struct Rec{
         int id;
         int value;
 };
int main (){
        const char *name ="rec.dat";
        int rec_n=2;
        int fd =open(name , O_RDONLY);
        struct flock lock;
        memset(&lock ,0 ,sizeof(lock));
        lock.l_type =F_RDLCK;
        lock.l_whence=SEEK_SET;
        lock.l_start=(rec_n -1)*sizeof(Rec);
        lock.l_len =sizeof(Rec);
        Rec record;
        lseek(fd,lock.l_start,SEEK_SET);
        read(fd,&record,sizeof(record));
        cout<<"Record " <<record.id<< " value: " <<record.value<<endl;
        lock.l_type =F_UNLCK;
        close(fd);
        return 0;


/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q18r_lck.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Record -1790597672 value: 32651
*/

	#include<iostream>
#include<fstream>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>
using namespace std;
 struct Rec{
         int id;
         int value;
 };

int main (){
        const char * name="rec.dat";
        int rec_n=2;
        int fd =open (name ,O_RDWR);
         struct flock lock;
         memset(&lock,0,sizeof(lock));
         lock.l_type =F_WRLCK;
         lock.l_whence=SEEK_SET;
         lock.l_start=(rec_n -1)*sizeof(Rec);
         lock.l_len=sizeof(Rec);
         Rec record;
         lseek(fd,lock.l_start,SEEK_SET);
	  read(fd,&record,sizeof(record));

         record.value+=50;
         cout<<"Record " <<record.id<<"new value: " <<record.value<<endl;
         lseek(fd,lock.l_start,SEEK_SET);
         write(fd,&record,sizeof(record));

         lock.l_type =F_UNLCK;

         close(fd);
         return 0;
}

/*output
 *
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ open Q18w_lck.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q18w_lck.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
Record -840587816new value: 32655
*/

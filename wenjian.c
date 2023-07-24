#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
   int fd;
   int fd_read,fd_write;
   char buf[100];
   char filename[100];
   char read_buf[100];
   printf("please scanf thr filename and contem\n");
   scanf("%s %s",filename,buf);
   fd=open(filename,O_RDWR |O_CREAT);
   if(fd == -1){
   }
   fd_write=write(fd,buf,strlen(buf)); 
   if(fd_write == -1){
   }
   lseek(fd, 0, SEEK_SET);
   fd_read=read(fd,read_buf,100);
   if(fd_read == -1){
   }
   printf("%s",read_buf);
   close(fd);
   return 0;
}
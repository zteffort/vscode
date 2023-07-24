#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#define len 5
int main ()
{
    int fd_create,fd_write,fd_read;
    char frame[50];
    char buf[1024];
    printf("please scanf the filename :\n");
    scanf("%s",frame);
    fd_create=open(frame,O_WRONLY | O_CREAT | O_TRUNC,S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    if(fd_create == -1){
    printf("can not create the file");
    return -1;
    }
    printf("please scanf the content:\n");
    scanf("%s",buf);
    fd_write=write(frame,buf,sizeof(buf));
    if(fd_write == -1){
    printf("can not write the file");
    return -1;
    }
    fd_read=read(frame,buf,len);
    if(fd_read == -1){
    printf("can not read the file");
    return -1;
    }
    close(fd_create);
    close(fd_read);
    close(fd_write);
    return 0;
}


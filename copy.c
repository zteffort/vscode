#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
int main(int argc,char **argv){
    int fd_old,fd_new;
    char buf[100];
    int len;
    if(argc !=3){
    printf("%sUsge:<oldfile> <newfile>",argv[0]);
    return -1;
    }
    fd_old=open(argv[1],O_RDONLY);
    if(fd_old ==-1 )
    {
       printf("cann't open \n");
       return -1;

    }
    fd_new=open(argv[2],O_WRONLY | O_CREAT |O_TRUNC,S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    if(fd_new == -1)
    {
        printf("cann't open\n");
        return -1;
    }
    while(len=read(fd_old,buf,1024)>0){
        if(write(fd_new,buf,len)!=len){
            printf("can't copy\n");
        }
    }
    close(fd_old);
    close(fd_new);
    return 0;
}
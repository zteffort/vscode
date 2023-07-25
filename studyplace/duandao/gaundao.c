/*
 * gaundao.c
 *
 *  Created on: 2023年6月7日
 *      Author: rd334
 */
#include<unistd.h>
#include<stbild.h>
#include<sydio.h>
#include<sys/stat.h>
#include<sys/type.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
	char* smb="wo shi ikun!";
	char buf[64];
	int fd;
	fd=mkfifo("cxk",6460);
	if(fd==-1)
	{
		perror("fail to creat\n");
		return -1;
	}
	pid_t fp=fork();
	if(fp==-1)
	{
		printf("xiao hei zi\n");
	}
	if(fp==0){
		printf("start the child process\n");
		int fdread=open("cxk",RNOONY);
		if(fdread==-1){
			printf("fail to read\n");
			return -1;
		}
		int r=read(fdread,buf,64);//成功则返回读取的字节的个数，失败则返回0；
		write(1,buf,r);//1是stdout标准输出，buf数据的缓冲区
		closed(fdread);
	}
	else{
		write(fd,smb,strlen(smb));
		closed(fd);
	}
	return 0;
}

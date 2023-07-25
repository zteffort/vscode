/*
 * d.c
 *
 *  Created on: 2023年5月30日
 *      Author: rd334
 */
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{
	pid_t pid;
	int fd[2];
	char buff[64],cmd="exit";
	if(pipe(fd))
	{
		perror("fail to create pipe!");
		return 0;

	}
	pid=fork();
	if(-1==pid)
		{
			perror("fail to create pipe!");
			return 0;
		}
	else if(0==pid)//子进程
		{
			close(fd[1]);
			read(fd[0],buff,64);
		}
	if(0==strcmp(buff,cmd))
			{
				printf("recv is command ok!\n");
				close(fd[0]);
				exit(0);
			}
	else  //父进程
		{
			printf("parent pocess!child pocess id is%d\n!",pid);
			close(fd[0]);//关闭读进程
			sleep(2);
			printf("send command to child pocess\n");
			write(fd[1],cmd,strlen(cmd)+1);
			close(fd[1]);

		}
	return 0;
}


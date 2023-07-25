/*
 * fuzijincheng.c
 *
 *  Created on: 2023年5月30日
 *      Author: rd334
 */
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int fd[2];
	pid_t pid;
	char but[64]="I am the father!\n";
	char line[64];
	if(0!=pipe(fd)){
		fprintf(stderr,"fail to creat the process！\n");
		return 0;
	}
	pid=fork();
	 if(pid<0){
		fprintf(stderr,"fail to creat the process！\n");
	}
	else if(pid==0){
		close(fd[0]);
		write(fd[1],but,strlen(but));
		close(fd[1]);
	}
	else
	{
		close(fd[1]);
		read(fd[0],line,64);
		printf("date from parent is %s\n",line);
		close(fd[0]);
	}
	return 0;
}

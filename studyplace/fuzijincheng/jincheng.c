/*
 * jincheng.c
 *
 *  Created on: 2023年6月1日
 *      Author: rd334
 */
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t pid, pid_wait;
	int status;
	if(-1=pid){
		printf("error to create the process!");
		return 0;

	}
	else if(0=pid){
		printf("child process!\n");
	}
	else {
		printf("parent process！child process pid is%d\n",pid);
		pid_wait=waitpid(pid, &status,0);
		printf("child process %d return\n",pid_wait);
	}
	return 0;
}

/*
 * mainkun.c
 *
 *  Created on: 2023年6月7日
 *      Author: rd334
 */
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
int main (int argc,char *argv[])
{
	pid_t kun=fork();
	if(kun==-1){
		printf("小黑子\n");
		return 1;
	}
	if(kun==0){
		printf("坤坤正在准备中\n");
		printf("坤坤的id是:%d",getpid());
		execle("./kun","kun","NULL");
	}
	else{
		printf("大坤正在准备中\n");
		printf("坤的id是%d，我在等他执行\n",kun);
		int* status;
		waitpid(kun,status,0);
		printf("坤已经执行完了\n");
		}
}


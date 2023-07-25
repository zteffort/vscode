/*
 * 2.c
 *
 *  Created on: 2023年6月16日
 *      Author: rd334
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i,times;
	if(argc<2||(times=atoi(argv[1]))<1)
		printf("usage:%s postion_number\n",argv[0]);
	else
		for(i=0;i<times;i++)
			printf("hello,you are right!");
	return 0;
}


/*
 * 4.c
 *
 *  Created on: 2023年5月25日
 *      Author: rd334
 */
//使用指针算法
#include<stdio.h>
#define SIZE 10
int sump(int *start,int *end);
int main()
{
	int marble[SIZE]={12,13,14,15,16,17,18,19,20,21};
	long answer;
	answer=sump(marble,marble+SIZE);
	printf("数组marble的总数之和是%ld\n",answer);
	printf("数组marble的字节个数是%zd\n",sizeof marble);
	return 0;
}//指针算法
int sump(int *start,int *end)
{
	int total=0;
	while(start<end)
	{
		total+=*start;
		start++;
	}
	return total;
}



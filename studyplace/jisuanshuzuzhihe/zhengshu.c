/*
 * zhengshu.c
 *
 *  Created on: 2023年6月14日
 *      Author: rd334
 */
#include<stdio.h>
#define SIZE 10
int  sump(int *start,int *end);
int main()
{
	int marble[SIZE]={11,12,13,14,15,16,17,18,19,20};
	long num;
	num=sump(marble,marble+SIZE);
	printf("数组之和是%ld",num);
	return 0;

}
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

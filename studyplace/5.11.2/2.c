/*
 * 2.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	int count,num;
	printf("请输入一个数字\n");
	scanf("%d",num);
	count=0;
	while (count++<11)
	{
		printf("%d",&num);
	num++;
	}
	printf("\n");
	return 0;
}



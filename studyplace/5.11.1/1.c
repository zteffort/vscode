/*
 * 1.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
#define TIME 60
int main()
{
	int hour,min,left;
	printf("请输入你的时间的\n");
	scanf("%d,min");


	while(min>0)
	{
		hour=min/TIME;
		left=min%TIME;
		printf("你的时间是%d时%d分\n",hour,left);
		printf("继续下一次输入\n");
		scanf("%d",&min);
	}
	return 0;

}


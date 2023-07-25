/*
 * 3.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
#define WEEK 7
int main()
{
	int week,day,left;
	printf("请输入你的天数\n");
	scanf("%d",&day);
	while(day>0)
	{
		week=day/WEEK;
		left=day%WEEK;
		printf("%d有%d周%d天",day,week,left);
		printf("请继续输入\n");
		scanf("%d",&day);
	}

	return 0;



}


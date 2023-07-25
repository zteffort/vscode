/*
 * 10.c
 *
 *  Created on: 2023年5月19日
 *      Author: rd334
 */
//统计素数的个数
#include<stdio.h>
int main()
{
	int i=0, j=0,num=0,mask1=0,mask2=0;
	printf("请输入大于0的整数，我将为你打印所有素数");
	while(scanf("%d",&num)==1)//确保输入的都是大于零的整数
	{
		if(num>0)
			break;
		else
		{
			printf("程序输入错误");
			continue;
		}

	}
	for(i=2;i<=num;mask1=0,i++)//编译所有小于输入整数的数
	{
		for(j=1;j<=i;j++)//统计所有素数的个数
		{
			if(i%j==0)
				mask1++;
			if(mask1==2)
			{
			printf("%5d",i);
			mask2++;
			if(mask2%8==0)
			{
				printf("/n");

			}
			}
		}
	}
}


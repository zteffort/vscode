/*
 * 3.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	int num,l=0, n=0;
	double num_1=0.0,num_2=0.0;
	do
	{
		printf("请输入整数：\n");
		scanf("%d",&num);
		{
			break;
		}
		if(num==0)
		{
			break;
		}
		if(num%2 == 0)
		{
			num_2 += num;
			n++;
		}
		if(num%2 == 1)
		{
			num_1 += num;
			l++;
		}
	}while(1);
	printf("奇数个数是%d,奇数的平均值是%lf\n偶数的个数是%d,偶数的平均值是%lf",l,num_1/l,n,num_2/n);
	return 0;
}


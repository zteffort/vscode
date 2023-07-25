/*
 * 9.c
 *
 *  Created on: 2023年5月23日
 *      Author: rd334
 */
#include<stdio.h>
#include"hello.h"
#include"jisuan.h"
int main()
{
	printf("hello world\n");
	sayhello();
	printf("\n输入要的计算数.\n");
	double a=0.0,b=0.0,c=0.0,d=0.0;
	scanf("%lf,%lf",&a,&b);
	c=jiafa(a,b);
	d=chengfa(a,b);
	printf("这两个数的和为：%lf\n",c);
	printf("这两个数的积为：%lf\n",d);
}



/*
 * 4.c
 *
 *  Created on: 2023年5月22日
 *      Author: rd334
 */
#include<stdio.h>
double harmean(double x,double y);

int main()
{
	double a,b;
	printf("请输入两个数:");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		printf("%g和%g的调和平均数是:%g\n",a,b,harmean(a,b));
		printf("请继续输入或者按q结束\n");

	}
	printf("done\n");
	return 0;
}
double harmean(double x,double y)
{
	return 2/(2/x+2/y);
}



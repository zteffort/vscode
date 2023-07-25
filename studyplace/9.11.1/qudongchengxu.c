/*
 * qudongchengxu.c
 *
 *  Created on: 2023年5月19日
 *      Author: rd334
 */
#include <stdio.h>

double min(double x, double y);

int main()
{
	double a,b;
	printf("请输入两个数(按q取消)");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		printf("其最小值是%lf",min(a,b));
		printf("请继续输入(或者按q取消)");
	}
	return 0;
}
double min(double x,double y)
{
	return x<y?x:y;
}



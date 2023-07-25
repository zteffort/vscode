/*
 * 5.c
 *
 *  Created on: 2023年5月22日
 *      Author: rd334
 */
#include<stdio.h>
void large_of(double *x,double *y);
int main()
{
	double a,b;
	printf("请输入两个整数:\n");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		large_of(&a,&b);
		printf("其结果是:%lf %lf",a,b);
		printf("请继续输入或者按q结束\n");

	}
	printf("done\n");
	return 0;

}
void large_of(double *x,double *y)
{
	*x=*y=*x>*y?*x:*y;
		return;
}

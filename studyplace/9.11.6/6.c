/*
 * 6.c
 *
 *  Created on: 2023年5月22日
 *      Author: rd334
 */
#include<stdio.h>
void test(double *x,double *y,double *z);//定义函数
int main()
{
	double a,b,c;
	printf("请输入3个数:\n");
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		test(&a,&b,&c);
		printf("最大值是:%g",a);
		printf("中间值是:%g",b);
		printf("最小值是:%g",c);
		printf("请继续输入\n");
	}
	return 0;

}
void test(double *x,double *y,double *z)
{
	double tp;//对函数进行排序，用if语句
	if(*x<*y)
	{
		tp=*x;
		*x=*y;
		*y=tp;
	}
	if(*x<*z)
		{
			tp=*x;
			*x=*z;
			*z=tp;
		}
	if(*y<*z)
		{
			tp=*y;
			*y=*z;
			*z=tp;
		}

	return ;


}

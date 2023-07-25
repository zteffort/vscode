/*
 * 8.c
 *
 *  Created on: 2023年5月22日
 *      Author: rd334
 */
#include<stdio.h>//程序清单 --计算数的整数幂
double power(double n,int p);
int main()
{
	double x,xpow;
	int exp;
	printf("请输入一个数以及他的幂");
	printf("如果想得到数字请按q");
	printf("停止\n");
	while(scanf("%lf %d",&x,&exp)==2)
			{
		xpow=power(x,exp);
		printf("%.3g的%d次幂是%.5g",x,exp,xpow);

			}
	printf("祝你得到想要的结果\n");
	return 0;

}
double power(double n,int p)
{

	double pow=1;
	int i;
	for(i=1;i<=p;i++)
	{
		pow *=n;

	}
	return pow;
}

/*
 * 9.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
void Temperatures(double fah);
int main()
{
	double she,fah,kai;
	printf("请输入温度\n");
	while(scanf("%lf",&fah)==1)
	{
		Temperature(fah);
		printf("继续输入");

	}
	printf("完成");

}
void Temperatures(double fah);
{
	const double a=5.0,b=9.0,c=32.0,d=273;
	printf("摄氏温度是%2f,华氏温度是%2f",a/b*(fah-c),a/b*(fah-c)+d);
}



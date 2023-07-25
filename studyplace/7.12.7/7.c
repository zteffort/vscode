/*
 * 7.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
#define BASE 10
#define TIME 40
#define OVER 15
int main()
{
	const float tax1 = 0.15;
	const float tax2 = 0.20;
	const float tax3 = 0.30;
	double hour=0.0,income=0.0,salary=0.0,tax=0.0;
	printf("请输入您的工作时间:");
	scanf("%lf",&hour);
	if(hour<=TIME)
	{
		salary=BASE*hour;
		if(salary<=300)
		{
			tax=tax1*salary;
			income=salary-tax;
			printf("您的工资是%lf,您的净收入是%lf,您的税收是%lf",salary,income,tax);
		}
		else
		{
			tax=300*tax1+(salary-300)*tax2;
			income=salary-tax;
			printf("您的工资是%lf,您的净收入是%lf,您的税收是%lf",salary,income,tax);

		}
	}

	if(hour>=TIME)
	{
		salary=BASE*TIME+OVER*(hour-TIME);
		if(salary<=450)
		{
			tax=300*tax1+(salary-300)*tax2;
			income=salary-tax;
			printf("您的工资是%lf,您的净收入是%lf,您的税收是%lf",salary,income,tax);
		}
		else
		{
			tax=300*tax1+150*tax2+(salary-450)*tax3;
			income=salary-tax;
			printf("您的工资是%lf,您的净收入是%lf,您的税收是%lf",salary,income,tax);
		}
	}
	return 0;


}


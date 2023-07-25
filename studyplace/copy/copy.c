/*
 * copy.c
 *
 *  Created on: 2023年6月14日
 *      Author: rd334
 */
#include<stdio.h>
#define LEN1 7
#define LEN2 3
void arr(const double a[],int n);
void copy(double ar1[],const double ar2[],int n);
int main()
{
	double orgi[LEN1]={1.0,2.0,3.0,4.0,5.0,6.0,7.0};
	double targer[LEN2];
	printf("原函数是：");
	arr(orgi,LEN1);
	copy(targer,orgi+2,LEN2);
	printf("复制后的目标函数是：");
	arr(targer,LEN2);
	return 0;
}
void arr(const double a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%-5g",a[i]);
	}
	putchar('\n');

}
void copy(double ar1[],const double ar2[],int n)
{
	for(int i=0;i<=n;i++)
	{
		ar1[i]=ar2[i];
	}
	return ;
}

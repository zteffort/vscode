/*
 * 10.c
 *
 *  Created on: 2023年5月26日
 *      Author: rd334
 */
//编写一个函数，两个数组相加并储存到另一个数组中
#include<stdio.h>
#define N 5
void arr(const int a[],const int b[],int c[],int n);
void show(int x[],int n);
int main()

{
	int a[N]={1,2,3,4,5};
	int b[N]={2,3,4,5,6};
	int c[N]={0};
	printf("数组a:\n");
	show(a,N);
	printf("数组b:\n");
	show(b,N);
	printf("数组c:\n");
	show(c,N);
	arr(a,b,c,N);
	printf("数组c等于数组a加上数组b:\n");
	show(c,N);
}
void arr(const int a[],const int b[],int c[],int n)
{
	for(int i=0;i<n;i++)
		{
		c[i]=a[i]+b[i];
		}
}
void show(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%-3d",x[i]);
	}
	putchar('\n');

}

/*
 * shu.c
 *
 *  Created on: 2023年6月14日
 *      Author: rd334
 */
//函数形参输入计算其数组值的大小
#include<stdio.h>
#define L 3
#define N 5
void arr(double a[],int n);
void show(double a[][N],int n);
double average(const double a[],int n);
double average2(double a[][N],int n);
double maxed(double a[][N],int n);
int main()
{
	double mark[L][N];
	for(int l=0;l<L;l++)
	{
		printf("请输入第%d行\n",l+1);
		arr(mark[l],N);
		printf("\n");

	}
	printf("二维数组是：\n");
	show( mark,L);
	for(int l=0;l<L;l++)
	{
		printf("第%d行的平均值是:%lf\n",l+1,average(mark[l],L));


	}
	printf("其二维数组的平均值是%lf\n",average2(mark,L));
	printf("其二维数组的最大值是%lf\n",maxed(mark,L));
}
void arr(double a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("请输入第%d个数字",i+1);
				scanf("%lf",&a[i]);
	}
	putchar('\n');
}

void show(double a[][N],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%-5g",a[i][j]);
		}
		putchar('\n');
	}
}
double average(const double a[],int n)
{
	double sum=0.0;
	for(int i=0;i<n;i++)
	{

		sum +=a[i];
	}
	return n>0?sum/n:0.0;
}
double average2(double a[][N],int n)
{
	double sum=0.0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<N;j++)
		{
			sum+=a[i][j];
		}
	}
	return n>0?sum/n*N:0.0;
}
double maxed(double a[][N],int n)
{
	double max=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<N;j++)
		{
			max=max<a[i][j]?a[i][j]:max;
		}
	}
	return max;
}

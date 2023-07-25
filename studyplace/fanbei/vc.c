/*
 * vc.c
 *
 *  Created on: 2023年6月15日
 *      Author: rd334
 */
#include<stdio.h>
#define N 3
#define M 5
void arr(int (*a)[M],int n);
void two_time(int (*a)[M],int n);
int main()
{
	int mark[N][M]=
	{
			{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15}

	};
	printf("数组是：\n");
	arr(mark,N);
	two_time(mark,N);
	printf("加倍后的数组是：\n");
	arr(mark,N);

}
void arr(int (*a)[M],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<M;j++)
		{
			printf("%5d",a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}
void two_time(int (*a)[M],int n)
{
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<M;j++)
			{
				a[i][j] *=2;
			}
		}
}

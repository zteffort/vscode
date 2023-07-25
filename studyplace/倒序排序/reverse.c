/*
 * reverse.c
 *
 *  Created on: 2023年6月14日
 *      Author: rd334
 */
#include<stdio.h>
void arr(const double a[],int n);
void reverse( double a[],int n);
#define SIZE 5
int main(void)
{
	double mark[SIZE]={1.1,1.2,1.3,1.4,1.5};
	printf("数组：");
	arr(mark,SIZE);
	reverse(mark,SIZE);
	printf("其倒序后的结果是：");
	arr(mark,SIZE);
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
void reverse(double a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        double t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    return;
}


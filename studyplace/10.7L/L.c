/*
 * L.c
 *
 *  Created on: 2023年6月15日
 *      Author: rd334
 */
#include<stdio.h>
#define M 12
#define N 5
void arr(const float a[][M],int n);
void brr(const float a[][M],int n);
int main()
{
	const float rain[N][M]={
			{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
			{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
			{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
			{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
			{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	arr(rain,N);
	brr(rain,N);
	return 0;
}
void arr(const float a[][M],int n)
{
	int i,j;
	float total,subtot;
	printf(" YEAR    RAINFALL  (inchs)\n");
	for(i=0,total=0;i<n;i++)
	{
		for(j=0,subtot=0;j<M;j++)
			subtot+=a[i][j];
		printf("%5d %15.1f\n",2010+i,subtot);
			total+=subtot;
	}
	printf("\n年平均降雨量是%.1f",total/n);
	putchar('\n');
}
void brr(const float a[][M],int n)
{
	int i,j;
	float subtot;
	printf("每个月的降雨量是\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for(i=0;i<M;i++)
	{
		for(j=0,subtot=0;j<n;j++)
			subtot += a[j][i];
		printf("%4.1f",subtot/n);//%4.1f表位宽4,小数点一位
	}
	putchar('\n');
}

/*
 * 3.c
 *
 *  Created on: 2023年5月25日
 *      Author: rd334
 */
//统计数组元素之和
#include<stdio.h>
#define SIZE 10
int sum(int ar[],int n);//ar[]指向marble数组的指针
int main()
{
	int marble[SIZE]={20,14,14,16,17,16,14,34,20,31};
	long anwser;
	anwser=sum(marble,SIZE);
	printf("数组的各数之和是:%ld\n",anwser);
	printf("marble数组的字节个数是：%zd",sizeof marble);
	return 0;



}
int sum(int ar[],int n)//统计ar数组字节个数
{
	int i;
	int total;
	for(i=0;i<n;i++)
		total+=ar[i];
		printf("ar数组的字节个数是%zd",sizeof ar);
		return total;
}

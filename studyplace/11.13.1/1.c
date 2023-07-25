/*
 * 1.c
 *
 *  Created on: 2023年5月26日
 *      Author: rd334
 */
//从输入中获得n个字符
#include<stdio.h>
#define N 5
void get(char str[],int n);
int main(int argc,char *argv[])
{
	    char str[N];
	    printf("请输入%d个字母:",N-1);
	    get(str,N);
	    printf("结果是:/n");
	    puts("str\n");
	    printf("done\n");
	    return 0;
}
void get(char str[],int n)
{
	for(int i=0;i<n-1;++i)
	{
		str[i]=getchar();

	}
	str[n-1]='\n';
}



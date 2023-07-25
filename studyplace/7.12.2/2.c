/*
 * 2.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
#define SIZE 255
int main()
{
	char ch[SIZE]={0};
	int i=0,max=0;
	printf("请输入任意字符以#键结束");
	for(i=0;(ch[i]=getchar())!='#';i++)
	{	max=0;
	while(getchar()!='\n')
		continue;
	printf("请继续输入:");
	}
	for(i=1;i<=max+1;i++)
	{
		printf("%c-%d",ch[i-1],ch[i-1]);
		if(i%8==0)
		{
			printf("\n");
		}

	}
	return 0;
}


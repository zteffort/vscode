/*
 * lunliiushuruzifu.c
 *
 *  Created on: 2023年5月19日
 *      Author: rd334
 */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 500
int main()
{
	int ch[SIZE]={0},i=0,count=0;
	printf("请输入一串字符并以ctrl+D结束");
	while((ch[i]=getchar())!=EOF)
	{
		i++;

	}
	printf("您所输入字符串的ASCLL码为：\n");
	for(i=0;ch[i]!=EOF;i++)
	{
		if(ch[i]=='\n')
		{
			printf("\\n-%-8.d",ch[i]);
		}
		else if(ch[i]='\t')
		{
			printf("\\t-%-8.d",ch[i]);
		}
		else
		{
			printf("%c-%-8.	d",ch[i],ch[i]);
		}
		count++;
		if(count==10)
			printf("\n");
	}
	return 0;
}


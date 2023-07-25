/*
 * 1.c
 *
 *  Created on: 2023年5月19日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	int ch=0,count=0;
	printf("请输入字符并以ctrl+z结束\n");
	while((ch=getchar())!=EOF)
	{
		count++;
	}
	printf("我统计到的字符数量是%d",count);
	return 0;
}


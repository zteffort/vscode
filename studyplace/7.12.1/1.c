/*
 * 1.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	char ch;
	int lc=0;//统计空格的个数
	int uc=0;//统计换行字符的个数
	int oc=0;//统计其他字符的个数
	printf("请输入一段字符串并以#键结束");
	while((ch=getchar())!='#')
		if (ch==' ')
			lc++;
		else if(ch== '\n')
			uc++;
		else
			oc++;
	printf("空格的个数是%d,换行字符的个数是%d,其他字符的个数是%d",lc,uc,oc);
	return 0;

}


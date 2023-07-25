/*
 * 5.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
int mian()
{
	char ch;
	int i=0;
	printf("请输入");
	while ((ch=getchar())!='#')
		switch(ch)
		{
		case '.':
			putchar('!');
			i++;
			break;
		case '!':
			putchar('!!');
			i++;
			break;
		default:
			putchar(ch);
		}
	printf("一共进行了%d次替换",i);
	return 0;

}


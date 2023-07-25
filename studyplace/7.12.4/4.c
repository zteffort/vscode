/*
 * 4.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	int i=0;
	char ch;
	printf("请输入，我将用感叹号代替句号，用两个感叹号代替感叹号(以#号键结束)");
	while ((ch=getchar())!='#')
	{
		if (ch == '.')
			{
			putchar('!');

			i++;
			}
		else if (ch == '!')
		{
			putchar('!!');
			i++;
		}
	}
	printf("一共进行了%d次替换",i);

	return 0;
}


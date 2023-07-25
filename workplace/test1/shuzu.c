/*
 * shuzu.c
 *
 *  Created on: 2023年5月8日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	char e;
    int a=0;
	int b=0;
	int c=0;
	int d=0;
	while((e=getchar())!='\n')
	{
		if(e>='A'&&e<='Z')
		{
			a++;
		}
		else if(e>='a'&&e<='z')
		{
			b++;
		}
		else if(e>='0'&&e<='9')
		{
			c++;
		}
		else if(e==' ')
		{
			d++;
		}
	}
	printf("大写字母的个数是%d个\n",a);
	printf("小写字母的个数是%d个\n",b);
	printf("数字的个数是%d个\n",c);
	printf("空格的个数是%d个\n",d);
	return 0;
}



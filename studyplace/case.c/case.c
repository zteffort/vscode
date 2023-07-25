/*
 * case.c
 *
 *  Created on: 2023年6月14日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	char ch;
	int a_ch,b_ch,c_ch,d_ch;
	a_ch=b_ch=c_ch=d_ch=0;
	printf("请输入字符串以#键结束");
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
				a_ch++;
		break;
		case 'A':
			b_ch++;
		break;
		case '1':
					c_ch++;
		break;
		case ' ':
					d_ch++;
					break;
		default:break;
		}
	}
	printf("小写字母的个数是%d",a_ch);
	printf("大写字母的个数是%d",b_ch);
	printf("数字的个数是%d",c_ch);
	printf("空格的个数是%d",d_ch);
	return 0;
}


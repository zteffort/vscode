/*
 * 1.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
#define size 26
int main()
{
	char ch[size];
	int index;
	for(index=0;index<size;index++)
	{
		ch[index]='a'+index;
		printf("%c,ch[index]");
	}
	printf('\n');
	return 0;
}


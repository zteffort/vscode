/*
 * 2.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
//嵌套循环
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;j<=5;i++)
	{
		for(j=1;i<=5;j++)
			printf('$');
		printf('/n');

	}
	return 0;

}



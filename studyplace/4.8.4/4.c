/*
 * 4.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	float height;
	char name[40];
	printf("请输入你的名字和身高\n");
	scanf("%f",&height);
	printf("你的名字是什么\n");
	scanf("%s",name);
	printf("%s,你是%f英尺高\n",name,height/12.0);
	return 0;


}


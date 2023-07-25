/*
 * 4.c
 *
 *  Created on: 2023年5月11日
 *      Author: rd334
 */
#include<stdio.h>
#define FEET 30.48
#define INCHES 2.54
int main()
{
	int feet;
	float cm,inches;
	printf("请输入你的身高\n");
	scanf("%f",&cm);
	while(cm>0)
	{
		feet=(int)(cm/FEET);
		inches=(cm-feet*FEET)/INCHES;
		printf("%f有%d英尺%f英寸\n",cm,feet,inches);
		printf("请继续输入\n");
		scanf("%f",&cm);


	}
	return 0;


}




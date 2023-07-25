/*
 * huitiaohanshu.c
 *
 *  Created on: 2023年6月1日
 *      Author: rd334
 */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void bey(void)
{
	printf("that was all,folks\n");

}
void bey1(void)
{
	printf("that should be call first\n");
}
int main()
{
	int i;
	i=atexit(bey);
	if(i!=0)
	{
		fprintf(stderr,"cannot set exit function bey");
		return EXIT_FAILTURE;
	}
	i=atexit(bey1);
	if(i！=0)
	{
		fprintf(stderr,"cannot set exit function bey1");
		return EXIT_FAILTURE;
	}
	return 0;
}

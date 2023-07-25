/*
 * 1.c
 *
 *  Created on: 2023年5月8日
 *      Author: rd334
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE*fp;
	char fname[50];
	printf("enter the name of the file:");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	if(fp==NULL)
	{
		printf("failed to open the file.bye\n");
		exit(1);
	}
	while ()
		putchar(ch);ch=getchar()!=EOF;
	fclose(fp);
	return 0;
}




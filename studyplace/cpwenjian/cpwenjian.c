/*
 * cpwenjian.c
 *
 *  Created on: 2023年6月2日
 *      Author: rd334
 */
/*文件拷贝程序，提示用户输入文件夹名，并以该文件夹名作为原始文件夹名和输出文件夹名*/
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#define LEN 50
int main(int argv,char *argc[])
{
	int ch;
	FILE *fp;
	char filename[LEN];
	printf("请输入文件名\n");
	scanf("%49s",filename);
	if((fp=fopen(filename,"r+"))==NULL)
		{
			perror("error to open the file");
			exit(1);
		}
	while((ch=getc(fp))!=EOF)
	{
		fseek(fp,-1L,SEEK_CUR);//向前移动一格，回退一个字节
		putc(toupper(ch), fp);
		fseek(fp,0L,SEEK_CUR);//恢复字节的状态
	}
		rewind(fp);
		printf("filename is %s",filename);
	while((ch=getc(fp))!=EOF)
	{
		putchar(ch);

	}
	putchar('\n');
	if(fclose(fp)!=0)//收尾
	{
		fprintf(stderr,"cannot close the files",filename);
	}
	return 0;
}

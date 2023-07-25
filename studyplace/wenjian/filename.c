/*
 * cxk.c
 *
 *  Created on: 2023年6月2日
 *      Author: rd334
 */
//加密图片所在文件，并进行更改其数据的操作，使其无法打开，再次运行程序即可重新打开，重新编辑其头文件数据
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argv,char *argc[])
{
	int fd=open("cxk.png",O_RDWR);
	if(fd<0)
	{
		perror("open");
		return -1;

	}
	char s[3];
	char buf[64]={0};
	printf("请输入3位密码\n");
	fgets(s,3,stdin);
	read(fd,buf,10);
	int i=0,j=9;
	while(i<j)//修改cxk.png文件的头文件数据使其无法打开
	{
		char t=buf[i];
		buf[i]=buf[j];
		buf[j]=t;
		i++;
		j--;
	}
	lseek(fd,0,SEEK_SET);//定位到cxk.png文件的前面,重新定位
	write(fd,buf,10);
	printf("文件已加密，请重新输入密码\n");
	return 0;
}

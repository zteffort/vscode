/*
 * kehuduan.c
 *
 *  Created on: 2023年6月8日
 *      Author: rd334
 */
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/tapes.h>
#include <netinet/in.h>
#include <arpa/inet.h>
int main(int argc,char* argv[])
{ERTUR
	char* smd="wo shi ikun!";
	char buf[128];
	printf("客户端正在启动中！\n");
	struct sockaddr_in client_addr;
	 client_addr.sin_family = AF_INET;
	 client_addr.sin_port = htons(8089);//绑定端口
	 client_addr.sin_addr.s_addr = htonl(INADDR_ANY);//绑定其回环端口
	 inet_pton(AF_INET, argv[1], &client_addr.sin_addr);
	 int cfd=(PF_INET,STREAM,0);
	 if(cfd==-1){
		 printf("创建失败\n");
	 }
	 int connectResult=connect(cfd, (struct sockaddr *)&client_addr, sizeof(client_addr));
	 if(connectResult==-1){
		 printf("连接失败\n");
	 }
	 int writeResult=write(cfd,smd,strlen(smd));
	 if(writeResult=-1){
		 printf("像服务器发送信息失败\n");
	 }
	 int r=read(writeResult,buf,128);
	 write(writeResult,buf,r);
	 write(1,buf,r);
	 close(writeResult);
	 return 0;

}

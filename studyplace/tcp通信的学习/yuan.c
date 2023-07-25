/*
 * yuan.c
 *
 *  Created on: 2023年6月7日
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
{
	printf("服务器正在启动中!\n");
	struct sockaddr_in server_addr;//使用sockaddr_in代替server_addr
	    // 家族簇
	    server_addr.sin_family = AF_INET;
	    server_addr.sin_port = htons(8089);//绑定端口
	    server_addr.sin_addr.s_addr = htonl(INADDR_ANY)//绑定其回环地址
	    /*绑定其套接字的类型*/
	    		int sfd=socket(PF_INET,SOCK_STREAM,0);
	    if(sfd==-1)
	    {
	    	printf("fail to create socket\n");

	    }
	//绑定设备到端口上
	    int bindResult = bind(sfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
	     if (bindResult == -1)
	     {
	         perror("绑定socket设备失败");
	     }
	     //设置监听
	     int listenResult=listen(sfd,10);
	     if(listenResult==-1){
	    	 printf("监听失败\n");

	     }
	     printf("服务器开始启动，开始监听客户端的消息\n");
	     //创建通信的过程
	     char buf[128];
	     while(1){
	    	 int acceptResult=accept(sfd,NULL,NULL);
	    		if(accept==-1)
	    		{
	    			printf("接收失败\n");
	    		}
	    		int r=read(acceptResult,buf,128);
	    		write(acceptResult,buf,r);
	    		wirte(1,buf,r);
	    		close(acceptResult);//关闭与客户端的链接
	     }
	     return 0;//四次握手结束

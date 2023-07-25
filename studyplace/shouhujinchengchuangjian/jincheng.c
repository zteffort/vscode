/*
 * jincheng.c
 *
 *  Created on: 2023年6月1日
 *      Author: rd334
 */
/*1.创建子进程,函数原型
#include <sys/types.h>
       #include <unistd.h>
​
       pid_t fork(void);
2.结束进程--exit()/_exit()
#include<sys/types.h>
		_exit(int status);
#include<unistd.h>
		_exit(int status);
3.进程回收 --wait、waitpid
#include<stdio.h>
#include<sys/wait.h>
pid_t wait(int *wstatus);
wstatus:进程结束时首地址的位置；
返回值：返回成功返回进程的pid失败则返回-1；
pid_t wait(pid_t int *wstatus,int options);
pid:进程号，若进程号是-1则代表接受任何子进程；
wstatus:进程结束时的首地址；
option--0：代表阻塞的形式结束子进程
WHOHANG:以非阻塞的方式结束子进程
exec函数族
添加变量 path=?  */
守护进程

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
void init_daemon();
int main(int argc, char *argv[])
{
    struct tm *t = NULL;
    time_t now;

    init_daemon();

    while(1)
    {
        FILE *fp = fopen("/tmp/time.log", "a+");
        if(fp == NULL)
        {
            perror("fopen");
            exit(0);
        }
        time(&now);
        t = localtime(&now);
        fprintf(fp, "%d年%d月%d日%d:%d:%d\n", t->tm_year+1900, t->tm_mon+1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
        sleep(1);
        fflush(fp);
        fclose(fp);
    }
    return 0;
}

void init_daemon()      //创建守护进程
{
    pid_t pid = fork();      //创建子进程
    if(pid < 0)
    {
        perror("fork");
        exit(0);
    }
    if(pid > 0)             //父进程退出
    {
        exit(0);
    }

    setsid();               //让子进程脱离原本会话

    chdir("/tmp");          //修改当前工作路径

    umask(0);               //重设文件权限掩码
    int i = 0;
    for(i = 0; i < getdtablesize(); i++)
    {
        close(i);
    }
    return;
}


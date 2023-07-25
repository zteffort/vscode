#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(int argc,char *argv[])
{
	pid_t pid=fork();
	if(pid==-1)
	{
		printf("error to creat ");
	}
	if(pid==0)
	{
		printf(" 返回子进程\n");
	}
	else
	{
		printf("父进程返回子进程的pid：%d，该信息永远在父进程中输出",pid);
	}
	printf("由于子进程复制了父进程的pcb，所以该信息在父进程与子进程中都显示");
	return 0;
}

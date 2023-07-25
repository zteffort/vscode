/*
 * xiancheng.c
 *
 *  Created on: 2023年6月1日
 *      Author: rd334
 */
线程相关接口函数pthred_t数据类型
/*创建线程  #include <pthread.h>
​
   int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                      void *(*start_routine) (void *), void *arg);
//结束线程
#include <pthread.h>
​
   void pthread_exit(void *retval);
/*待线程
#include<pthread.h>
void pthread_join(pthread_t thread,void **retval)retval--线程结束信息，若不想填可以返回null
//线程间的通信  sem_t 数据类型
线程的初始化
#include <semaphore.h>
​
 int sem_init(sem_t *sem, int pshared, unsigned int value);
 参数：
  sem：信号量对象
  pshared：填0表示用于线程间同步
  value：信号量的初始值

 返回值：成功返回0，失败返回-1   信号量减一，阻塞等待直到有资源被唤醒
 申请资源  sem_wait()
#include<semaphore.h>
 int sem_wait(sem_t *sem);
释放资源 sem_post()   信号量加一，资源被唤醒
#include<semaphore.h>
int sem_wait(sem_t *sem);
*/
利用多线程实现数据的输入与输出，一个线程输入数据一个线程打印数据
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

void *func(void *);
void *func1(void *);
char str[64];
sem_t sem, sem1;
int main(int argc, char *argv[])
{
    sem_init(&sem, 0, 0);
    sem_init(&sem1, 0, 1);
    pthread_t thread1, thread2;
    int ret1 = pthread_create(&thread1, NULL, func, NULL);
    if(ret1 < 0)
    {
        perror("pthread_create");
        exit(-1);
    }
    int ret2 = pthread_create(&thread2, NULL, func1, NULL);
    if(ret2 < 0)
    {
        perror("pthread_create");
        exit(-1);
    }

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return 0;
}

void *func(void *arg)
{
    while(1)
    {
        sem_wait(&sem1);
        printf("请输入数据：\n");
        fgets(str, 64, stdin);
        sem_post(&sem);
    }
}
void *func1(void *arg)
{
    while(1)
    {
        sem_wait(&sem);
        printf("%s", str);
        sem_post(&sem1);

    }
}
//实现一个线程一个进程输入，另一个进程打印其输入内容


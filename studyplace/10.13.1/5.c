/*
 * 5.c
 *
 *  Created on: 2023年5月25日
 *      Author: rd334
 */
//指针操作
#include<stdio.h>
int main()
{
	int urn[5]={100,200,300,400,500};
	int *ptr1,*ptr2,*ptr3;
	ptr1=urn;
	ptr2=&urn[2];
	printf("赋值的地址是%p,解引用的值是%d,原指针的地址是%p\n",ptr1,*ptr1,&ptr1);
	//指针加法
	ptr3=ptr1+4;
	printf("prt3=%p,*ptr3=%d",ptr1+4,*ptr1+4);
	//指针递增和递减
	ptr1++;
	printf("%p,%d\n",ptr1,*ptr1);
	ptr2--;
	printf("%p,%d\n",ptr2,*ptr2);
	--ptr1;
	++ptr2;
	//一个指针去减另一个指针
	printf("ptr1%p减去%ptr得到%td\n",ptr2,ptr1,ptr2-ptr1);
	//一个指针减去一个整数
	printf("ptr3-2是%p",ptr3-2);
	return 0;


}


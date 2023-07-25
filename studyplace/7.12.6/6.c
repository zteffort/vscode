/*
 * 6.c
 *
 *  Created on: 2023年5月18日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
	 int i=0,sum=0;
	 char ch;
	 while ((ch=getchar())!='#')
		 {
		 if(ch='e')
		 {
			 i=1;
		 }
		 if(ch='i'&&i==1)
		 {
			 i=2;
			 sum++;
		 }
		 else
			 i=0;

		 }
	 printf("\nei出现的次数是%d",sum);
	 return 0;
}


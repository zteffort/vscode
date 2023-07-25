/*
 * 2.c
 *
 *  Created on: 2023年5月24日
 *      Author: rd334
 */
#include<stdio.h>//统计元素个数
int main()
{
        const int days[]={31,28,31,30,31,30,31,31,31,30};
        int index;
        for(index=0;index<sizeof(days)/sizeof(days[0]);index++)
        printf("%2d月有%d天\n",index+1,days[index]);
        return 0;
}



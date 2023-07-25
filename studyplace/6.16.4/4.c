/*
 * 4.c
 *
 *  Created on: 2023年5月16日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
         char ch='A';
         for(int i=1;i<=6;i++)
         {
                for(int j=1;j<=i;j++)
                {

                        printf("%c",ch++);
                }
                printf("\n");
         }
                return 0;

}



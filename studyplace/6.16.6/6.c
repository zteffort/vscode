/*
 * 6.c
 *
 *  Created on: 2023年5月16日
 *      Author: rd334
 */
#include <stdio.h>

int main(void)
{
    int upper, lower;

    printf("Please input the upper limits: ");
    scanf("%d", &upper);
    printf("Please input the lower limits: ");
    scanf("%d", &lower);

    printf("%s\t%s\t%s\t\n", "number", "square", "cube");
    for (int i = lower; i <= upper; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    printf("Done.\n");

    return 0;
}




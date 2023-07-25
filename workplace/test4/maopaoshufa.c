/*
 * maopaoshufa.cpp
 *
 *  Created on: 2023年5月15)
 *   Author: rd334
 */
#include<stdio.h>
int main()
{
void Swap(int* a, int* b)//交换函数
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void BubbleSort(int* a, int n)
{
    int i = 0;
    int index = n - 1;//最后一个值的下标
    while (index > 0)
    {

        int flag = 0;//记录该区间是否有值交换
        for (i = 0; i < index; i++)//将需排序区间里面最大的值交换到区间最后一个
        {
            if (a[i] > a[i + 1])//大的往后交换
            {
                Swap(&a[i], &a[i + 1]);
            }
        }

        if (flag == 0)//表示没有值交换，数组已经有序，前面待排序区间也已经有序
        {
            return;
        }
        index--;//冒泡排序进行一次，区间向前缩进1，后面的数已经完成排序。
    }
}
return 0;
}




/*
 * kuaisupaixufa.c
 *
 *  Created on: 2023年5月15日
 *      Author: rd334
 */
#include<stdio.h>
int main()
{
int SingleSort1(int* a, int left, int right)
{
    int keyi = left;
    while (left < right)
    {
        while (left < right && a[right] >= a[keyi])//右边找到小于keyi位置的值停止
        {
            right--;
        }
        while (left < right && a[left] <= a[keyi])//左边找到大于keyi位置的值停止
        {
            left++;
        }
        Swap(&a[left], &a[right]);//交换
    }
    //当left=right时，表示相遇，与keyi位置交换
    Swap(&a[keyi], &a[left]);
    return left;
}

void QuickSort(int* a, int left,int right)
{
    int keyi = SingleSort1(a,left,right);
    if (left >= right)//表示区间只有一个或者没有值，直接返回
    {
        return;
    }
    //[left,keyi-1] keyi [keyi+1,right]
    QuickSort(a, left, keyi - 1);//递归keyi的左区间
    QuickSort(a, keyi + 1, right);//递归keyi的右区间
}
return 0;
}






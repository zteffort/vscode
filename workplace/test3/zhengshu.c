/*
 * zhengshu.c
 *
 *  Created on: 2023年5月9日
 *      Author: rd334
 */
#include <stdio.h>

int countOnes(unsigned int n) { //进制转化
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;//返回其值
}

int main() {
    unsigned int n;
    printf("请输入一个无符号整数：");
    scanf("%u", &n);
    printf("该整数的二进制表达式中数字位数为 '1' 的个数为：%d\n", countOnes(n));
    return 0;
}




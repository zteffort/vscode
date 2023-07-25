/*
 * wenjian.c
 *
 *  Created on: 2023年5月9日
 *      Author: rd334
 */
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[100];
    char filename[] = "test.txt";
    char ch;

    printf("请输入一个字符串：");
    scanf("%s", str);

    if (strlen(str) < 10) {
        printf("字符串长度不能少于10个字节。\n");
        return 1;
    }

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }

    fputs(str, fp);
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }

    fseek(fp, -10, SEEK_END);
    printf("文件的最后10个字节为：");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(fp);
    return 0;
}




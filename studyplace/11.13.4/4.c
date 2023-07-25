/*
 * 4.c
 *
 *  Created on: 2023年6月2日
 *      Author: rd334
 */
//编写一个程序，按顺序在屏幕上显示命令行中列出的所有文件，使用argc控制循环
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, temp;
    FILE *source;

    if (argc == 1)
    {
        fprintf(stderr, "Usage: %s filename[s]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (i = 1; i < argc; i++)
    {
        if ((source = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s\n", argv[i]);
            continue;
        }
        printf("File %s:\n", argv[i]);
        while ((temp = getc(source)) != EOF)
        {
            putchar(temp);
        }
        putchar('\n');
        if (fclose(source) != 0)
        {
            fprintf(stderr, "Can't close file %s\n", argv[i]);
        }
    }

    return 0;
}

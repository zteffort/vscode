//#include <stdio.h>
//#include <ctype.h>
/*#define LEN 10

void getnchar(char str[], int n);

int main(int argc, char *argv[])
{
    char str[LEN];
    printf("Please enter %d characters:\n", LEN - 1);
    getnchar(str, LEN);
    printf("Result:\n");
    puts(str);
    printf("Done.\n");
    return 0;
}
void getnchar(char str[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        str[i] = getchar();
        if (isspace(str[i]))//isspace 函数统计空白字符串的个数，若是空白字符返回0；若是其他的返回其他值
        {
            break;//遇到空白直接跳出去
        }
        i++;
    }
    str[i] = '\0';
}
int main()
{
	char c1=' ';
	char c2='A';
	int a1=isspace(c1);
	int a2=isspace(c2);
	printf("c1的值是%d",a1);
	printf("c2的值是%d",a2);
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int a=3,b=4,c=5,d=2;
	if(a>b)
		if(b>c)
			printf("%d",++d+1);
		else
			printf("%d",++d+1);
	printf("%d",d);
	return 0;
}

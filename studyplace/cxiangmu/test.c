/*
 * test.c
 *
 *  Created on: 2023年6月20日
 *      Author: rd334
 */
/*#include<stdio.h>
int f(unsigned int n) {
    unsigned int m = 0;
    for (m = 0; n; ++m) {
        n &= (n - 1);
    }
    return m;
}
int main()
{
	printf("%d",f(2486));
}

int main () {
    int i,a[5];
    for (i = 0; i <5; i++) {
        a[i] = 0;
        printf("%d:hello\n", i);
    }
    printf("%d:hello world",i);
    return 0;
}
#include <stdio.h>
int main()
{
    char ch[5]={0};
    scanf("%s",ch);
    int j;
    puts(ch);
    for(j = 0; ch[j] != '\0'; j++)
        if(ch[j] >= 'A' && ch[j] <= 'Z')
            ch[j] = ch[j] + 'e' - 'E';
    puts(ch);
}*/
/*#include <stdio.h>12
int main(){
    unsigned char i = 1;//声明无符号的整数类型
    i -= 4;
    printf("the value of i is: %d" , i);
}

#include <stdio.h>
int a, b;
void fun() {
    a = 100;
    b = 200;
}
int main() {
    int a = 5, b = 7;
    fun();
    printf("%d %d\n", a, b);
    return 0;
}
*/
#include<stdio.h>
#define max 100
struct  book {
    char  author[max];
    char title[max];
    float value[max];

};
int  main()

{
    struct book s1={
    		{ "zengtian"},
			{"wenhua"},
        {20.06}
    };
    printf("%s",s1.author);
    return 0;
}

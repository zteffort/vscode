#include<stdio.h>
/*int main()
{
    unsigned  a=5;

    int *p=&a;
    int **q=&p;
    printf("a_addr:%d,*p=%d,p=%d,p_addr:%d,q:%d",&a,*p,p,&p,q);
    return 0;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int i,j;
    printf("please scanf two number\n");
    scanf("%d %d",&i,&j);
    printf("%d",max(i,j));
    return 0;
}
*/
struct student{
    int year;
    int month;
    char name[20];
};
int main()
{
    struct student student1;
    printf("请输入小孩的数据:\n");
    scanf("%d %d %s",&student1.month,&student1.year,student1.name);
    printf("%d %d %s",student1.month,student1.year,student1.name);
    return 0;
   
    
}
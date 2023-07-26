#include<stdio.h>
int num_max(int a,int b){
    return a>b?a:b;
}
int main()
{
    int num[50];
    int n,max=0;
    printf("scanf the number \n");
    scanf("%d",&n);
    printf("scnaf the content\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        max=num_max(max,num[i]);
    }
    printf("the maxture is%d",max);
    return 0;
}
    

/*
 * lianbiaosuanfa.c
 *
 *  Created on: 2023年5月15日
 *      Author: rd334
 */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node * next;
};
//创建头节点；
struct node * top_create(struct node * list)
{
    list=(struct node *)malloc(sizeof(struct node));
    if(list==NULL) return NULL;
    list->next=NULL;
    return list;
}
//创建链表；
struct node * list_create(struct node * list,int *arr,int n)
{
    if(list==NULL) return NULL;
    struct node * p = list;
    int i;
    for(i=0;i<n;i++,p=p->next)
    {
        struct node* temp=(struct node *)malloc(sizeof(struct node));
        temp->value=arr[i];
        p->next=temp;
    }
    p->next=NULL;
    return list;
}
//遍历链表；
void list_visist(struct node * list)
{
    if(list==NULL) {printf("链表错误\n");}
    else{
    struct node *p=list;
    printf("\n查\n");
    for(p=list->next;p;p=p->next)
    {
        printf("%d \t",p->value);
    }
    printf("\n");
    }
}
//删除元素；
struct node * list_delet(struct node * list,int n)
{
    if(list==NULL) return NULL;
    struct node * p=list;
    struct node * temp;
    for(p=list;p->next;p=p->next)       //注意一开始 p=头节点，判断条件：下个节点不为空。
    {                                   //循环的目的是找到被删除节点的前一个节点。后续删除有用。
        if(p->next->value == n)         //下个节点的value==n 就结束循环，此时已找到！
        {
            break;
        }
    }
    if(p->next!=NULL)                   //假如没找到 此时p->next==NULL;
    {
        temp=p->next;
        p->next=temp->next;
        free(temp);
    }
    else
    {
        printf("\n!!!没找到该vlaue的节点!!!\n");
    }
    return list;

}
//中转删除
struct node * zz_delet(struct node *list)
{
    int n;
    printf("删：\n请输入删除的数，请输入n:\n");
    scanf("%d",&n);
    printf("\n");
    return list_delet(list,n);
}
//增加节点
struct node* list_add(struct node *list,int n,int m)
{
    struct node *p=list;
    struct node *p1=p;
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    while(n--)
    {
        p1=p;                       //而p1 指向的是上一个节点。 因为
        p=p->next;                  //当n为0是p 指向当前输入的节点
    }
    temp2->value=m;
    p1->next=temp2;                 //  注意将新建的节点与前相连
    temp2->next=p;                  //  注意将新建的节点与后相连
    return list;
}
//中转 增加
struct node * zz_add(struct node *list)
{
    int n,m;
    printf("增：\n请问在哪个节点（1-10）添加哪个元素呢\n");
    scanf("%d %d",&n,&m);
    printf("\n");
    return list_add(list,n,m);
}
//修改节点vlaue值
struct node * list_replace(struct node *list,int n,int m)
{
    struct node * p=list;
    while(n--)
    {
        p=p->next;              //p指向要修改的节点。
    }
    p->value = m;
    return list;
}
//中转 修改
struct node * zz_replace(struct node *list)
{
    int n,m;
    printf("改：\n请输入想修改哪个节点(1-10)上的哪个数:\n");
    scanf("%d %d",&n,&m);
    printf("\n");
    return list_replace(list,n,m);
}
//链表的增删改查
int main()
{
    struct node *list;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    list=top_create(list);                      //建头节点。
    list=list_create(list,arr,10);              //建 (数组元素n个)
    list_visist(list);                          //查
    list=zz_delet(list);                        //删
    list_visist(list);                          //查
    list=zz_add(list);                          //增
    list_visist(list);                          //查
    list=zz_replace(list);                      //改
    list_visist(list);                          //查
    free(list);                                 //释放
    return 0;
}



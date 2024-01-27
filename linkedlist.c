#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};

getnode()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link =NULL;
    printf("ENter the data value : \n");
    scanf("%d",&temp->data);
}
insert_front()
{
    temp=getnode();
    struct node *ptr;
    ptr->link =NULL;

}
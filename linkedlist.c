#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;

};
int main()
{
struct node *head=NULL;
head=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&head->data);
head->link=NULL;

struct node *cur=NULL;
cur=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&cur->data);
cur->link=NULL;

printf("%d \n",head->data);
printf("%d",cur->data);

return 0;

}


#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;

};
struct node *head=NULL;
void count_of_nodes();
int main()
{

head=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&head->data);

struct node *cur=NULL;
cur=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&cur->data);
head->link->link=cur;
cur->link=NULL;

printf("%d head-data \n",head->data);
printf("%d cur -data",cur->data);
count_of_nodes();
return 0;

}
void count_of_nodes()
{
    int count=0;
    struct node *ptr=NULL;
    if(head==NULL)
        printf("No lined list");
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("count is %d \n",count);
}



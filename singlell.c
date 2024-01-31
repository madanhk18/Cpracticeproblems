#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;
struct node *temp;

create()
{
    int ele;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the info part \n");
    scanf("%d",&ele);
    temp->info=ele;
}

void insert_front()
{
    int count;
    temp=create();

    temp->link=first;
    first=temp;
}
void insert_end()
{
    struct node *cur;
    if(first==NULL)
    {
        first=temp;
        return;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
}
void delete_front()
{
    if(first==NULL)
    {
        printf("Underflow \n");
        return;
    }
    temp=first;
    printf("deleted elemet is %d \n",first->info);
    first=first->link;
    free(temp);
}
void delete_end()
{
    struct node *cur,*prev;
    if(first==NULL)
    {
        printf("Underflow \n");
        return;
    }
    cur=first;
    prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    prev->link=NULL;
    printf("The deleted element is %d \n",cur->info);
    free(cur);
}

void display()
{
    struct node *cur;
    if(first==NULL)
    {
        printf("Underflow \n");
        return;

    }
    cur=first;
    printf("Elements of the linked list are \n");
    while(cur!=NULL)
    {
        printf("%d \n",cur->info);
        cur=cur->link;
    }
}
int main()
{
    int num;
    while(1)
    {
        printf("Enter 1:Insert_front() \n 2:Insert_end() \n 3:Delete_front() \n 4:Delete_end() \n 5:Display \n");
        scanf("%d",&num);
        switch (num)
        {
        case 1:insert_front();
            break;

        case 2:insert_end();
            break;

        case 3:delete_front();
            break;

        case 4:delete_front();
            break;

        case 5:display();
            break;
        
        default:printf("Not a valid input");
            break;
        }
    } 
}
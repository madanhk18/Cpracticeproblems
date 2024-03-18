#include<stdio.h>
#include<stdlib.h>

struct node{
    int sem;
    char name[10],usn[10],program[10],phn[10];
    struct node * link;
};

struct node *first=NULL;
struct node *temp,*cur;

struct node *getnode()
{
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter name \n");
    scanf("%s",temp->name);

    printf("Enter usn \n");
    scanf("%s",temp->usn);

    printf("Enter program \n");
    scanf("%s",temp->program);

    printf("Enter phn \n");
    scanf("%s",temp->phn);

    printf("Enter sem \n");
    scanf("%d",&temp->sem);

    temp->link=NULL;
    return temp;
}

void insert_front()
{
    temp=getnode();
    if(first==NULL)
    {
        first=temp;
        return;
    }
    temp->link=first;
    first=temp;
}
void insert_end()
{
    temp=getnode();
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

void del_front()
{
    if(first==NULL)
    {
        printf("Underflow \n");
        return;
    }
    printf("The deleted element is %d\n",first->sem);
    temp=first;
    first=first->link;
    free(temp);
}
void del_end()
{
    if(first==NULL)
    {
        printf("Underflow \n");
        return;
    }
    cur=first;
    while(cur->link->link!=NULL)
    {
        cur=cur->link;
    }
    temp=cur->link;
    cur->link=NULL;
    printf("The deleted element is %d\n",temp->sem);
    free(temp);
}

void display()
{
    int count=0;
    if(first==NULL)
    {
        printf("Underflow \n");
        return;
    }
    cur=first;
    printf("Student details are\n");
    while(cur!=NULL)
    {
        printf("%s\t%s\t%s\t%s\t%d\n",cur->name,cur->usn,cur->program,cur->phn,cur->sem);
        cur=cur->link;
        count++;
    }
    printf("Count==%d\n",count);
}

int main()
{
    int ch;
    for(;;)
    {
        printf("\n 1.insert front \n 2.insert end \n 3.delete front \n 4.delete end \n 5.exit \n");
        printf("\n Enter choice -> ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: insert_front();
                    break;
            case 2: insert_end();
                    break;
            case 3: del_front();
                    break;
            case 4: del_end();
                    break;
            case 5: exit(0);
            default:printf("INVALID");
                    break;
        }
    }
    return 0;
}

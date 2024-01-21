#include<stdio.h>
#define size 5

int q[size];
int r=-1;
int f=-1;

void insert();
void delete();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice--> \n");
        printf("1:Insert \n");
        printf("2:Delete \n");
        printf("3:Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                break;
            
            case 2: delete();
                break;

            case 3: display();
                break;
        }
    }
    return 0;
}
void insert()
{
    int ele;
    if(r==size-1)
    {
        printf("Queue overflow \n");
        return ;
    }

    else{
        r++;
        printf("Enter the element you need to insert \n");
        scanf("%d",&ele);
        q[r]=ele;

        if(f==-1)
            f=0;
    }
}

void delete()
{
    if(f==-1 || f>r)
    {
        printf("Queue is empty \n");
        return;
    }

    else{
        printf("The deleted element is %d \n",q[f]);
        f++;
    }
}

void display()
{
    if(f==-1 || f>r)
    {
        printf("Queue is empty \n");
        return;
    }

    else{
        printf("The queue elements are \n");
        for(int i=f;i<=r;i++)
        {
            printf("%d \n",q[i]);
        } 
    }
}
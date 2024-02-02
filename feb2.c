#include<stdio.h>
#include<stdlib.h>
#define size 5
int c_q[size],r=-1,f=-1;

void insert();
void delete();
void display();

int main()
{
    int choice;
    for(;;)
    {
        printf("1:insert \n, 2:Delete \n, 3:Display \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                break;

            case 2:delete();
                break
                ;
            case 3:display();
                break;

            default :printf("Enter a valid input");
                break;
        }
    }

}

void insert()
{
    if((r==size-1 && f==0 )|| (f=r+1))
    {
        printf("Overflow \n");
        return;
    }
    else
    {
        int ele;
        printf("Enter the element \n");
        scanf("%d",&ele);
        r=(r+1)%size;
        c_q[r]=ele;
        if(f==-1)
            f=0;
    }
}

void delete()
{
    if(f==-1 && f>r)
    {
        printf("Underflow \n");
        return;
    }
    else 
    {
        printf("The deleted elemet is %d",c_q[f]);
        f=(f+1)%size;
    }

}

void display()
{
    if(f==-1 && f>r)
    {
        printf("Underflow \n");
        return;
    }
    else 
    {
        int i;
        printf("The circular queue elements are \n");
        for(i=f;i>=r;i--)
        {
            printf("%d \n",c_q[i]);
        }
    }
}
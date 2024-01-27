#include<stdio.h>
#include<stdlib.h>
#define size 5
int r=-1;
int f=-1;
int cir_queue[size];
void insert();
void delete();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice --> \n");
        printf("1.Insert \n");
        printf("2.Delete \n");
        printf("3.Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert();
                    break;

            case 2 : delete();
                    break;
            
            case 3 : display();
                    break;
        }
    }
    return 0;
}

void insert()
{
    int ele;
    if((r==size-1 && f==0) || (f==r+1))
    {
        printf("Overflow \n");
        return;
    }
    else {
        printf("Enter the element \n");
        scanf("%d",&ele);
        r=(r+1)%size;
        cir_queue[r]=ele;

        if(f==-1)
        {
            f=0;
        }
    }
}

void delete()
{
    if(f==-1 || f>r)
    {
        printf("Underflow \n");
        return;
    }
    else{
        printf("The deleted element is %d",cir_queue[f]);
        f=(f+1)%size;
        }
}

void display()
{
     if(f==-1 || f>r)
    {
        printf("Underflow \n");
        return;

    }
    else{
        int i;
        printf("The circular queue elements are \n");
        for(i=f;i!=(r+1)%size;i=(i+1)%size)
        {
            printf("%d \n",cir_queue[i]);
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
#define size 5
int *s;
int top=-1;

int isfull();
int isempty();
void insert();
void delete();
void display();
int main()
{
    s=(int *)malloc(size * sizeof(int));

    int ch;
    while(1)
    {
        printf("Enter your choice \n");
        printf("1.Insert \n 2.Delete\n 3.Display \n");
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


int isfull()
{
    if(top==size-1)
        return 1;
    else   
        return 0;
}

int isempty()
{
    if(top==-1)
        return 1;
    else    
        return 0;
}

void insert()
{   
    int ele;
    if(isfull()==1)
    {
        printf("Stack overflow \n");
        return;
    }
    else{
        printf("Enter the element \n");
        scanf("%d",&ele);
        top++;
        s[top]=ele;
    }
}
void delete()
{
    if(isempty()==1)
    {
        printf("Stack underflow \n");
        return;
    }
    else{
        printf("Deleted elemet is %d",s[top]);
        top--;
    }
}

void display()
{
     if(isempty()==1)
    {
        printf("Stack underflow \n");
        return;
    }
    else{
        int i;
        for(i=top;i>=0;i--)
        {
            printf("%d \n",s[i]);
        }
    }

}

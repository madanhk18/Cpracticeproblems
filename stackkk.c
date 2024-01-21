#include<stdio.h>
#define size 5

int stack[size];
int top=-1;

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

void push();
void pop();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("SELECT THE OPTIONS FOR STACK--> \n");
        printf("1:PUSH \n");
        printf("2:POP \n");
        printf("3:Display \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 : push();
            break;
        
        case 2 : pop();
            break;

        case 3 : display();
            break;
        default:    printf("NOT VALID");
            break;
        }
    }
}

void push()
{
        int ele;
    if(isfull()==1)
    {
        printf("Stack Overflow \n");
        return ;
    }
    else
    {
        printf("Enter the elements: \n");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}

void pop()
{
    if(isempty()==1)
    {
        printf("Stack underflow \n");
        return;
    }
    else 
    {
        printf("The deleted element is %d \n",stack[top]);
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
    else
    {
        printf("Stack elemets are \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}
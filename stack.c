#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void display();
int main()
{
    int choice;
    for(;;)
    {
        printf("1:Push \n , 2:Pop \n , 3:Display \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : push();
            break;
        
        case 2 : pop();
            break;

        case 3 : display();
            break;
        default: printf("Not a valid one");
            break;
        }
    }
    return 0;
}

void push()
{
    int ele;
    if(top==size-1)
    {
        printf("Stack overflow \n");
        return;
    }
    printf("Enter the element \n");
    scanf("%d",&ele);
    stack[++top]=ele;
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow \n");
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
     if(top==-1)
    {
        printf("Underflow \n");
        return;
    }
    else
    {
        int i;
        printf("The stack elemets are \n");
        for(i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}


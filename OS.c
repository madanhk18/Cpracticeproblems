#include<stdio.h>
int mutex=1,full=0,empty=3,x=0;

int main()
{

    int n;
    void producer();
    void consumer();
    int wait(int);
    int signal(int);
   

    printf("1->Producer \n 2->Consumer \n 3->Exit \n");
    while(1)
    {
        printf("\n Enter your choice : \n");
        scanf("%d",&n);
        switch(n)
        {
            case 1 :if((mutex==1)&&(empty!=0))
                        producer();
                    else
                        printf("\n Buffer is full");
                    break;

            case 2 :if((mutex==1)&&(full!=0))
                        consumer();
                        else
                            printf("\n Buffer is empty \n");
                            
                        break;

            default : printf("Not valid");
            break;

        }
    }
    return 0;
}

int wait(int s)
{
    return (--s);
}

int signal(int s)
{
    return (++s);
}

void producer()
{
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
     x++;
    printf("\n Producer produces the item %d",x);
   

    mutex=signal(mutex);
}

void consumer()
{
    mutex=wait(mutex);
    empty=signal(empty);
    full=wait(full);
    printf("\n Item %d is consumed by Consumer",x);
     x--;
    mutex=signal(mutex);
}
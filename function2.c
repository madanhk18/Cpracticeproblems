#include<stdio.h>
//Declaration
int add(int a , int b);

// call //
int main(){
int a , sum , b;
printf("Enter the value of a : \n");
scanf("%d",&a);

 printf("Enter the value of b : \n");
scanf("%d",&b);
sum = a + b;
printf("Sum = %d",sum);

    return 0;
}

int add(int x ,int y){
    return 12;
}


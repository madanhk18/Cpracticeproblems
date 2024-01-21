#include<stdio.h>
 //declaration
 int fib(int n);

int main(){
    int n;
    printf("Enter the valur of n:\n");
    scanf("%d",&n);


    //printf("Fibonacci sequence is %d",fib(n));
   printf("%d",fib(n));

    return 0;
}

int fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibN;
    fibN=fibnm1+fibnm2;
    return fibN;
}
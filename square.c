#include<stdio.h>

void square(float num);
//decalaration//

int main()
{
    float num;
    printf("Enter the number you want: \n");
    scanf("%f",&num);
    square(num);
    return 0;
}

void square(float num){
    
    num=num * num;
    printf("The square of the value is %f",num);



}
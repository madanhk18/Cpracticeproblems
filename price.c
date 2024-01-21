#include<stdio.h>
//function decalration//
void calculategst(float value);
int main()
{
    float value;
      printf("Enter the value: \n");
    scanf("%f",& value);    // float value=250.0;
   

    calculategst(value);
    return 0 ;
}

void calculategst(float value){
   
    value=value + (0.18* value);
    printf("Final value is %f",value);
 

}
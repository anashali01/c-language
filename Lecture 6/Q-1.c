// Write a Program to find the minimum number from the given 2 numbers using if else.
#include <stdio.h>
int main(){
    int num1,num2;

    printf("Enter a value of first number :");
    scanf("%d",&num1);
    printf("Enter a value of second number :");
    scanf("%d",&num2);

    if(num1<num2)
    {
        printf("num1 value is minimum!!");
    }
    else
    {
        printf("num2 value is minimum!!");
    }

    return 0;
    
}
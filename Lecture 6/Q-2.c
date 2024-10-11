// Write a Program to find if a given number is neutral or not using a ladder if else.
#include <stdio.h>
int main(){
    int num;

    printf("enter any number :");
    scanf("%d",&num);

    if (num==0)
    {
        printf("This is Neutral");
    }
    else if(num>0)
    {
       printf("This is Positive");
    }
    else if(num<0)
    {
        printf("This is Negative");
    }
    else
    {
        printf("Invalid Number ");
    }
    return 0;

}
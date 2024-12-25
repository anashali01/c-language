// Write a Program to Swap two variables without using a third variable.
#include <stdio.h>
int main(){
    int x,y;

    printf("Enter you're first value");
    scanf("%d",&x);
    printf("Enter  you're second value");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("The swap value of x=%d and y=%d",x,y);

    return 0;
}
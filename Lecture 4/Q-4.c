// Write a Program to Swap two variables using the third variable.
#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter you're first value");
    scanf("%d",&x);
    printf("Enter you're second value");
    scanf("%d",&y);
    
    z=x;
    x=y;
    y=z;

    printf("The swap value of x=%d and y=%d ",x,y);

    return 0;

}

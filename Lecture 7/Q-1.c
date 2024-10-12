// Write a Program to find the minimum number from the given 3 numbers using nested
// if else. Also, draw a Flowchart in your book.
#include <stdio.h>
int main(){
    int  a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is max!",a);
        }
        else
        {
            printf("%d is max!",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is max!",b);
        }
        else
        {
            printf("%d is max!",c);
        }
    }

    return 0;

}
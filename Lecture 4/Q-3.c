// Write a Program to evaluate the formula: (x + y)3
#include <stdio.h>
int main(){
    int x,y;

    printf("Enter you're   first value ");
    scanf("%d",&x);
    printf("Enter you' re second value ");
    scanf("%d",&y);

    int result=(x+y)*(x+y)*(x+y);

    printf("The answer   is %d",result);

    return 0;
}

#include <stdio.h>
int main (){
    float pie,r,result;
    pie=3.14;

    printf("Enter your radius :");
    scanf("%f",&r);

    result=2*pie*r;

    printf("the answer is %.3f",result);

    return 0;
}
#include <stdio.h>
int main (){
    int b,h;
    printf("enter you,re base :");
    scanf("%d",&b);
    printf("enter your height :");
    scanf("%d",&h);
    float r=(b*h)/2;
    printf("the answer is %.3f",r);
    return 0;
}
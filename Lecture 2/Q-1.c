#include <stdio.h>
int main(){
    float r;
    float pie=3.14;
    printf("Enter your radius");
    scanf("%f",&r);
    r=pie*r*r;
    printf("The answer is %.2f",r);
    return 0;
}
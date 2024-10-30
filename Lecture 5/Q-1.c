// Write a Program to find the minimum number from the given 3 numbers using the  ternary operator.
#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter you're A value :");
    scanf("%d",&a);
    printf("Enter  you're B value :");
    scanf("%d",&b);
    printf("Enter you 're  C value :");
    scanf("%d",&c);

    a<b?a<c?printf("A is small"):printf("C is small"):b<c?printf("B is small"):printf("C is small");
}

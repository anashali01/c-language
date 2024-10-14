// Write a Program to print the multiplication table of the number N using any type of
// loop.
#include <stdio.h>
int main() { 
    int i,j,num;
    printf("Enter You're number :");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
           printf("%d X %d = %d\n",num,i,num*i);
    }
}
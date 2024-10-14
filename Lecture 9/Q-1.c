// Write a Program to print the sum of all numbers from 1 to N using a for loop.
#include <stdio.h>
int  main() {
    int i,n,sum=0;
    printf("Enter you're number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+=i;           
    }
    printf("%d ",sum);    
    return 0;
}

// Write a Program to print leap years between two given numbers using a while loop.
#include <stdio.h>
int main() {
    int first,second;
    printf("Enter the first year: ");
    scanf("%d",&first);
    printf("Enter the second year: ");
    scanf("%d",&second);
    while(first<=second){
        if(first%4==0)
        {
            printf("%d ",first);
        }
        first++;
    }
}
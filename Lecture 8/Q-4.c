// Write a Program to print odd numbers from N to 1 using a while loop.
#include <stdio.h>
int main (){
    int n,i;        //declare 2 variable
    printf("Enter a number: ");   //take input from user 
    scanf("%d",&n);
    i=n;             //i=n for user input number 
    while (i>=1)      //loop run  till i is greater than or equal to 1
    {
        if (i%2!=0)    //formula of odd number 
        {
          printf("%d ",i);    //condition true than print odd numbers
          
        }
        i--;    //decrement for reverse
    }
    
  return 0;

}
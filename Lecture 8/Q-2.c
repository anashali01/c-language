// Write a Program to print 10 to 1 using a while loop.
#include <stdio.h>
int main(){
    int num=10;  //initialize a value
    while (num>=1)  //give condition(10>1 it means loop run 10 to 1)
    {
        printf("%d ",num);   //print number 10 to 1
        num--;      //decrement
    }
    return 0;
}
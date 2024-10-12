// Write a Program to find the maximum number from the given 4 numbers using nested
// if else. Also, draw a Flowchart in your book.
#include <stdio.h>      //strat the program
int main(){
    int  a, b, c, d;            //declare 4 variable
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    if (a > b)                  //check a  is greater than b
    {
        if(a > c)               //check a is  greater than c
        {
            if(a > d)          //check  a is greater than d
            {
                printf("%d is max!",a);     //condition true than is a is max
            }
            else                            //condition false than d is maxx
            {
                printf("%d is max!",d);
            }
        }
        else                       //if condition false it means c is greater than a
        {  
            if(c > d)             //check c is greater than d
            {
                printf("%d is max!",c);      //condition true than c is maxx
            }
            else
            {
                printf("%d is max!",d);     //condition false than d is maxx
            }
        }
    }
    else                      //if condition false it means b is greater than a
    {
        if(b > c)            //check b is  greater than c
        {
            if(b > d)       //check b is greater than d
            {
                printf("%d is max!",b);  //condition true b is max
            } 
            else                       
            {
                printf("%d is max!",d);       //condition false d is maxx
            }
        }
        else                    //if condition wrong it means c is greater than b
        {
            if(c > d)         //check c is greater than d
            {
                printf("%d is max!",c);        //condition true c is max
            }
            else
            {
                printf("%d  is max!",d);   //condition false d is max
            }
        }
    }

    return 0;                //end the program
 
}
#include <stdio.h>
int main(){
   float p,r,n;

   printf("Enter your principle amount :");
   scanf("%f",&p);

   printf("Enter your Rate :");
   scanf("%f",&r);

   printf("Enter your month :");
   scanf("%f",&n);

   float result=(p*r*n)/100;

   printf("the answer is %.2f",result);

    return 0;
}
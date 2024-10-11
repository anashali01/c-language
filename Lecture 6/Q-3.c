#include <stdio.h>
int main(){
    float mathsmarks,engmarks,sciencemarks,totalmarks;

    printf("Enter you're maths marks :");
    scanf("%f",&mathsmarks);
    printf("Enter you're english marks :");
    scanf("%f",&engmarks);
    printf("Enter you're science marks :");
    scanf("%f",&sciencemarks);

    totalmarks=(mathsmarks+engmarks+sciencemarks)/3;

    printf("Average mark: %.2f",totalmarks);

    return 0;
}
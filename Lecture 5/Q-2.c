#include <stdio.h>
int main(){
    int choice,langchoice;  //Declare 2 variable

    printf("Press 1 for English");      
    printf("\nPress 2 for Hindi");         //print choices for user
    printf("\nPress 3 for Gujarati");
    printf("\nenter you're choice :");
    scanf("%d",&choice);

    switch (choice)                  //use switch statement to check user choice
    {
    case 1:                          //case for English language
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
        break;

    case 2:                          //case for Hindi language
    printf("Internet Recharge ke liye 1 dabay\n");
    printf("Top-up Recharge ke liye 2 dabay\n");
    printf("Special Recharge ke liye 3 dabay\n");
    break;

    case3:                           //case for Gujarati language
    printf("Internet Recharge mate 1 dabavo\n");
    printf("Top-up Recharge mate 2 dabavo\n");
    printf("Special Recharge mate 3 dabavo\n");
    break;

    default:                        //default for invalid choice
    printf("Enter your choice please!!!");
        break;
    }
    printf("Enter you're choice here :-");    //user choice for recharge type
    scanf("%d",&langchoice);

    switch (langchoice)                //switch statement for recharge successful message 
    {
    case 1:
    if(langchoice==1)                 //for internet recharge in english
    {
        printf("You successfully done your internet recharge");
    }
    else if (langchoice==2)          //for top-up recharge in english
    {
       printf("You successfully done your top-up recharge");
    }
    else                            //for special recharge in english
    {
        printf("You successfully done your special recharge");
    }
        break;

    case 2:                        //for Hindi language
    if(langchoice==1)              //for internet recharge in hindi
    {
        printf("Aapka internet recharge saflta purvak ho chuka hain!!");
    }
    else if (langchoice==2)       //for top-up recharge in hindi
    {
       printf("Aapka top-up recharge saflta purvak ho chuka hain!!");
    }
    else                         //for special recharge in hindi
    {
        printf("Aapka special recharge saflta purvak ho chuka hain!!");
    }

    break;

    case 3:                     //for Gujarati language
    if(langchoice==1)           //for internet recharge in gujarati
    {
        printf("Tamaro internet recharge thay giyu che!!");
    }
    else if (langchoice==2)     //for top-up recharge in gujarati
    {
       printf("tamaro  top-up recharge thay giyu che!!");
    }
    else                        //for special recharge in gujarati
    {
        printf("tamaro  special recharge thay giyu che!!");
    }

    default:
    printf("Enter your choice please!!!");

        break;

    }

    return 0;

}
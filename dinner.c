#include "rst_billing.h"


void dinner(char dinnermenu[][100]) // Dinner Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    dinner_menu();

    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
       // purchased[code][1]= purchased[code][1]+(quantity*dinner_rate[code][1]);
        purchased[code][1]= quantity*dinner_rate[code][1];
        total+=purchased[code][1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        dinner(dinnermenu);
    }
    repeatdinner(dinnermenu);
}

void dinner_menu()
{
    printf("                Welcome to abc Restaurant.          \n ");
    printf("             +============================+          \n\n");
    printf("                    $  Dinner Menu  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] Fried Rice - Rs 65.00\n");
    printf("\t\t   [1] Spagetti- Rs50\n");
    printf("\t\t   [2] Burger - Rs 70.00\n");
    printf("\t\t   [3] Pasta - Rs 80.00\n");
    printf("\t\t   [4] Noodles - Rs 65.00\n");
    printf("\t\t   [5] Paratha - Rs 110.00\n");
    printf("\t\t   [6] Fruit Salad - Rs 50.00\n");
}

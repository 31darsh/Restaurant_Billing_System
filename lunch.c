#include "rst_billing.h"
void lunch(char lunchmenu[][100]) // Lunch Screen Menu
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    lunch_menucard();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
       // purchased[code][1]= purchased[code][1]+(quantity*lunchrate[code][1]);
        purchased[code][1]= quantity*lunchrate[code][1];
         total+=purchased[code][ 1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
         lunch(lunchmenu);
    }
    repeatlunch(lunchmenu);
}

void lunch_menucard()
{
    printf("                Welcome to abc Restaurant.          \n ");
    printf("             +============================+          \n\n");
    printf("                   $  Lunch Menu  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] Veg Biryani - Rs 80.00\n");
    printf("\t\t   [1] Special Meal- Rs 120.00\n");
    printf("\t\t   [2] Roti - Rs 20.00\n");
    printf("\t\t   [3] Dal tadka - Rs 120.00\n");
    printf("\t\t   [4] Paneer Tikka - Rs 150.00\n");
    printf("\t\t   [5] Veg Mix - Rs 160.00\n");
    printf("\t\t   [6] Ice cream - Rs 30.00\n");
    printf("Enter your choice here : ");
}


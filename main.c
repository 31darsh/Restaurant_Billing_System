#include<stdio.h>
#include<stdlib.h>
#include "rst_billing.h"

//void main_menu();

int main()
{
    char bfmenu[][100]={"toast","Idli-wada","Dosa","Upma","milk","tea","coffee"};
    char lunchmenu[][100]={"Veg Biryani","Special meal","Roti","Dal","Paneer Tikka","Veg mix","Icecream"};
    char dinnermenu[][100]={"Fried rice","Spegatti","Burger"};
    char choice;
    do
    {
        enter:
        display();
        printf("Enter your choice here : ");
        scanf("%c", &choice);
        getchar();
        switch(choice)
        {
            case 'A':
            case 'a':printf("\nBreakfast\n");
                    bfast(bfmenu);
                    break;
            case 'B':
             case 'b':printf("\nLunch\n");
                    lunch(lunchmenu);
                    break;
             case 'C':
            case 'c':printf("\nDinner\n");
                    dinner(dinnermenu);
                    break;
           default:printf("\nWrong choice entered Please enter the valid choice!!\n");
                    goto enter;
        }
    }while(choice!='d');
}

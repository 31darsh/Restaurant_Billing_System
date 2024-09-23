#include "rst_billing.h"

int total=0;
float gst,cgst,sgst;
int again;

int bfrate[7][2]={  {0,30},
                    {1,35},
                    {2,40},
                    {3,20},
                    {4,15},
                    {5,20},
                    {6,30}
                };

int dinner_rate[7][2]={{0,65},
                {1,50},
                {2,70},
                {3,80},
                {4,65},
                {5,110},
                {6,50}};

int purchased[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
int lunchrate[7][2]={{0,80},
                {1,120},
                {2,20},
                {3,120},
                {4,150},
                {5,160},
                {6,30}};
int temp[][3]={{0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
                };

void bfast(char bfmenu[][100]) //Breakfast Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    display_bfmenu();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    printf("Total is %d\n\n",total);
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*bfrate[code][1]; /*purchased[code][1]+ (quantity*bfrate[code][1]);*/
        total+=purchased[code][1];
        printf("Total is %d\n\n",total);
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        bfast(bfmenu);
    }
    repeatbf(bfmenu);
}

void display_bfmenu()
{
    printf("                Welcome to FAMOUS Restaurant.          \n ");
    printf("             +============================+          \n\n");
    printf("                  $  Breakfast Menu  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] Toast - Rs 30.00\n");
    printf("\t\t   [1] Idli-Vada - Rs 35.00\n");
    printf("\t\t   [2] Dosa - Rs 40.00\n");
    printf("\t\t   [3] UPMA Rs 20.00\n");
    printf("\t\t   [4] Milk  - Rs 15.00\n");
    printf("\t\t   [5] Tea - Rs 20.00\n");
    printf("\t\t   [6] Coffee - Rs 30.00\n");
}

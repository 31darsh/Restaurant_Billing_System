#include "rst_billing.h"
void repeatbf(char bfmenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            bfast(bfmenu);
    else if (again == 2 )
    {
        display_bf_bill(bfmenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatbf(bfmenu);
    }
}

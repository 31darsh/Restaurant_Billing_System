#include "rst_billing.h"
void repeatlunch(char lunchmenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            lunch(lunchmenu);
    else if (again == 2 )
    {
        display_lunch_bill(lunchmenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatlunch(lunchmenu);
    }
}

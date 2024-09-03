#include "rst_billing.h"
void display_total_words()
{
    int num=0,digits=0,temp=0;
    while(total != 0)
    {
        num=(num * 10)+(total % 10);
        total/= 10;
        digits++;
    }
    printf("\nNo of digits::%d\n",digits);
    while(num!= 0)
    {
        temp++;
        switch(num%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        num = num / 10;
    }
    if(num==0&&digits!=temp)
        printf(" Zero ");
    return;
}

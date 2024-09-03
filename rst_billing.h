#ifndef RST_BILLING_H
#define RST_BILLING_H

extern int total;
extern float gst,cgst,sgst;
extern int again;
extern int bfrate[7][2];
extern int dinner_rate[7][2];
extern int purchased[][3];
extern int lunchrate[7][2];
extern int temp[][3];
void bfast(char bfmenu[][100]);
void lunch( char lunchmenu[][100]);
void dinner(char dinnermenu[][100]);
void display();
void lunch_menucard();
void dinner_menu();
void display_bf_bill(char bfmenu[][100]);
void display_lunch_bill(char lunchmenu[][100]);
void display_dinner_bill(char dinnermenu[][100]);
void display_bfmenu();
void repeatbf(char bfmenu[][100]);
void repeatlunch(char lunchmenu[][100]);
void repeatdinner(char dinnermenu[][100]);
void display_total_words();


#endif // RST_BILLING_H

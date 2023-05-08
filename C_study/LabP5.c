#include <stdio.h>

int main (void){
    int jan,feb,mar,apr,may,jun,jul,ago,sep,oct,nov,dec;
    int quarter1,quarter2,quarter3,quarter4;
    /*       ^           ^           ^       ^     */
    jan = 31;
    feb = 28;
    mar = 31;
    quarter1 = jan + feb + mar;

    apr = 30;
    may = 31;
    jun = 30;
    quarter2 = apr + may + jun;
    
    jul = 31;
    ago = 31;
    sep = 30;
    quarter3 = jul + ago + sep;

    oct = 31;
    nov = 30;
    dec = 31;
    quarter4 = oct + nov + dec;
    
    printf("Days in Q1 of the current year: %d \n", quarter1);
    printf("Days in Q2 of the current year: %d \n", quarter2);
    printf("Days in Q3 of the current year: %d \n", quarter3);
    printf("Days in Q4 of the current year: %d \n", quarter4);

return 0;
}
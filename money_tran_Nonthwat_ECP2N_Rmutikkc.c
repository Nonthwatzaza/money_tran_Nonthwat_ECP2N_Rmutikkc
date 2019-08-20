#include <stdio.h>
#include <stdlib.h>
// Open source code by Nonthwat zaza@ECP2N " BE JOY ^-^"
int main()
{
    float THB,JPY=0.3035,USD=33.24,GBP=43.15;
    int select;
    float JPYT,USDT,GBPT;
    printf("Specify amount (THB):");
    scanf ("%f",&THB);
    printf("1 : USD \n");
    printf("2 : JPY: \n");
    printf("1 : GBP: \n");
    printf("Please select a currency :");
    scanf ("%d",&select);
    {
        if (select>=4&&select<=0)
            printf("error Invalid input try again");
    switch (select)
    {
    case 1: USDT=THB/USD;
            printf("%f THB =%.3f USD ^_^",THB,USDT);
            return 0;
            break;

    case 2: JPYT=THB/JPY;
            printf("%f THB =%.3f USD ^_^",THB,JPYT);
            return 0;
            break;
    case 3: GBPT=THB/GBP;
            printf("%f THB =%.3f USD ^_^",THB,JPYT);
            return 0;
            break;
    }
    return 0;
    }
}

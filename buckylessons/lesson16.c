#include <stdio.h>

int main()
{
    float avgProfit;
    int priceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    avgProfit = (float) priceOfPumpkin * (float)sales / (float)daysWorked;
    printf ("Avarage daily profit: $%.2f", avgProfit);

    return 0;
}

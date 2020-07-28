#include <stdio.h>

int main()
{
    int priceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    float avgProfit = (float) priceOfPumpkin * (float)sales / (float)daysWorked;
    printf ("Avarage daily profit: $%.2f\n", avgProfit);

    return 0;
}

#include <stdio.h>

int main()
{
    int i;
    int diceroll;

    for(i=0; i<20; i++)
    {
        diceroll = ( rand()%6 ) +i;
        printf("%d \n", diceroll);
    }
    return 0;
}

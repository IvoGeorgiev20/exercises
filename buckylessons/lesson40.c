#include <stdio.h>

int main()
{
    int i;
    int player[5] = (58, 66, 68, 71, 87);
    int goals[5] = (26, 39, 25, 29, 31);
    int gamesPlayed[5] = (30, 30, 28, 30, 26);
    float pgg[5];
    flaot bestPPG = 0.0;
    int bestPlayer;

    for (i=0; i<5; i++){
        pgg[i] = (float) goals[i] / (float)gamesPlayed[i];
        printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamesPlayed[i], pgg[i]);
        if(ppg[i] > beatPPG){
            beatPPG = pgg[i];
            bestPlayer = player[i];
        }
    }
    printf("\nThe best player is %d \n", bestPlayer);

    return 0;

}

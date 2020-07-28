#include <stdio.h>

int main()
{
    float grade = 0;
    float scoreEntered = 0;
    float numberOfTests = 0;
    float avarage = 0;

    printf("Press 0 when complete. \n\n");

    do{
        printf("Tests:%.0f Avarage:%.2f \n", numberOfTests, avarage);
        printf("\nEnter test score: ");
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        avarage = grade / numberOfTests;
      }
    while(scoreEntered != 0);

    return 0;
}

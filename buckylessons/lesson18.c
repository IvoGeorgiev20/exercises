#include <stdio.h>

int main()
{
    int age;
    char gender;

    printf ("How old are you: ");
    scanf ("%d", &age);

    printf ("What is your gender? (m/f): ");
    scanf ("%c", &gender);

    if (age >= 18)
    {
        printf ("You may enter this website!");

        if (gender == 'm')
        {
            printf ("dude");
        }
        if (gender == 'f'){
            printf ("m'lady");
        }

    }

    if (age < 18)
    {
        printf ("Nothing to see here!\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int age;
    char gender;

    printf ("How old are you  \n");
    scanf ("%d", &age);

    printf ("What is your gender? (m/f)  \n");
    scanf ("%c", &gender);

    if (age >= 18)
    {
        printf ("You may enter this website");

        if (gender == 'm')
        {
            printf ("dude");
        }
        else
        {
            printf ("m' lady");
        }
    }
    else
    {
        printf ("Nothing to see here!");
    }

    return 0;
}

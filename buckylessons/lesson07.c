#include <stdio.h>

int main ()
{
    int age;
    int currentYear;
    int birthyear;

    currentYear = 2020;
    birthyear = 2005;
    age = currentYear - birthyear;

    printf ("Ivo is %d years old", age);

    return 0;
}

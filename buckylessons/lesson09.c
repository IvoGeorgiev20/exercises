#include <stdio.h>
#include <string.h>

int main ()
{
    char name[13] = "Ivo Georgiev";
    printf ("My name is %s \n", name);

    name[2] = 'z';
    printf ("My name is %s \n", name);

    char food[] = "tuna";
    printf ("My name is %s \n", food);

    strcpy(food, "bacon");
    printf ("My name is %s \n", food);

    return 0;
}

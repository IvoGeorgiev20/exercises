#include <stdio.h>
#include <string.h>

int main()
{
    char ham[100] = "Hey ";
    strcat (ham, "Ivo ");
    strcat (ham, "you ");
    strcat (ham, "smell! ");
    printf ("%s\n", ham);

    strcpy (ham, "Ivo is awesome!");
    printf ("%s\n", ham);

    return 0;
}

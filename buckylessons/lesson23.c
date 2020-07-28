#include <stdio.h>

int main()
{
    int friends = 87;

    printf ("I have %d friends%s.\n", friends, (friends !=1) ? "" : "");

    return 0;
}

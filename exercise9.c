#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];
    printf("Enter a decimal number: ");
    scanf("%s", &num);
    int i;
    int len;
    int result = 0;
    len = strlen(num);
    for(i = 0; i < len; i++)
    {
        result = result * 10 + ( num[i] - '0' );
    }
    printf("The integer is: %d", result);
}

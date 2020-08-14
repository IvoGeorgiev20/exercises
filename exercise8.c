#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter the binary number: ");
    scanf("%s", &a);
    int len;
    len = strlen(a);
    int num = 0;
    int i;
    for(i = 0; i < len; i++)
    {
        num = num * 2;
        if (a[i] == '1') num = num + 1;
    }
      printf("Decimal number = %d", num);
}

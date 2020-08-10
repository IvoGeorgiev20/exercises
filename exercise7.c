#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int i;
    int product = 1;
    for(i = 1; i < a+1; i++)
    {
        product = product * i;
    }
    printf("The product is: %d", product);
    return 0;
}

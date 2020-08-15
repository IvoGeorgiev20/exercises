#include <stdio.h>

int calculate_power(int num, int pow)
{
    int product = 1;
    int i;
    for(i = 0; i < pow; i++)
    {
        product = num * product;
    }
    return product;
}

int main()
{
    int num, pow;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the degree: ");
    scanf("%d", &pow);
    int product = calculate_power(num, pow);
    printf("The product is: %d\n", product);
}

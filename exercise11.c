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
    int n, i;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        int pow;
        printf("Enter the degree: ");
        scanf("%d", &pow);
        int product = calculate_power(num, pow);
        printf("The product is: %d\n", product);
    }
    return 0;
}

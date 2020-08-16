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
    printf("The product is %d\n", calculate_power(3, 3));
    printf("The product is %d\n", calculate_power(2, 7));
    printf("The product is %d\n", calculate_power(10, 2));
    printf("The product is %d\n", calculate_power(5, 5));
}

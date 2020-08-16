#include <stdio.h>

int calculate_power(int pow, int num)
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
    int i;
    int arr[100];
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the number of num: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        int pow;
        printf("Enter the power: ");
        scanf("%d", &pow);
        int product = calculate_power(pow, arr[i]);
        printf("The product is %d\n", product);
    }
    return 0;
}

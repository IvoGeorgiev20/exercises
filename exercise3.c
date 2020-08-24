//*През конзолата се приемат няколко числа и програмата трябва да ги умножи по двойки*//
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    int arr[n*2];
    int product;
    int i;

    for (i = 0; i < n*2; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n*2; i+=2)
    {
        product = arr[i] * arr[i+=2];
        printf("The product is: %d", product);
    }

    return 0;

}

#include <stdio.h>

int main()
{
    int i;
    int j;
    int arr[100];
    int num;
    int pow;
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int product;
    for(i = 0; i < n; i++)
    {
        printf("Enter the number of num: ");
        scanf("%d", &arr[i]);
    }

        for(j = 0; j < pow; j++)
        {
            product = arr[i] * product;
        }
        printf("The product is %d", product);
    }
return 0;
}

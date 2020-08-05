#include <stdio.h>

int main()
{
    int num;
    int arr[4] = {1, 2, 3, 4};
    int pow;
    int product = 1;
    int i;
    for(i = 0; i < arr; i++)
    {
        scanf("%d ", arr);
        for(i = 0; i < arr; i++)
        {
            scanf("%d ",pow);
            for(i = 0; i < pow; i++)
            {
                product = num * product;
            }
        }
        printf("The product is: %d", product);
    }
    return 0;
}

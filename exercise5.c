/*През конзолата се приемат едно по едно число и след това степен(няколко пъти), програмата трябва да пресметне стпойността*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the numbers: ");
    scanf("%d", n);
    int i;
    for(i = 0; i < n; i++)
    {
        int num;
        int pow;
        int product = 1;
        int j;
        printf("\nEnter the number: ");
        scanf("%d", &num);
        printf("Enter the power: ");
        scanf("%d", &pow);
        for(j = 0; j < pow; j++)
        {
            product = num * product;
        }
        printf("The product is: %d\n", product);
    }
    return 0;
}

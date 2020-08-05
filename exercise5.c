//*През конзолата се приемат едно по едно число и след това степен(няколко пъти), програмата трябва да пресметне стпойността*//

#include <stdio.h>

int main()
{
    int n = 10;
    int i;
    for(i = 0; i < n; i++)
    {
        int num;
        int pow;
        int product = 1;
        product = 1;
        printf("\nEnter the number: ");
        scanf("%d", &num);
        printf("Enter the power: ");
        scanf("%d", &pow);
        for(i = 0; i < pow; i++)
        {
            product = num * product;
        }
        printf("The product is: %d\n", product);
    }
    return 0;
}

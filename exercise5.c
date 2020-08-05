//*През конзолата се приемат едно по едно число и след това степен(няколко пъти), програмата трябва да пресметне стпойността*//

#include <stdio.h>

int main()
{
    int num;
    int n = 10;
    int pow;
    int product = 1;
    int i;
    int p;
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the number: ");
        scanf("%d", &num);
        printf("Enter the power: ");
        scanf("%d", &pow);
        for(p = 0; p < pow; p++)
        {
            product = num * product;
        }
        printf("The product is: %d\n", product);
    }


    return 0;
}

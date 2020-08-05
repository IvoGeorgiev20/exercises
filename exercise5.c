//*През конзолата се приемат едно по едно число и след това степен(няколко пъти), програмата трябва да пресметне стпойността*//

#include <stdio.h>

int main()
{
    int num;
    int pow;
    int product = 1;
    int i;
    for(i = 0; i < ; i++)
    {
        printf("\nEnter the number: ");
        scanf("%d", &num);
        printf("Enter the power: ");
        scanf("%d", &pow);
        for(i = 0; i < pow; i++)
        {
            product = num * product;
        }
        printf("The product is: %d", product);
    }
    return 0;
}

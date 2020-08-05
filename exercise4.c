//*През конзолата се приемат число и степен и програмата трябва да пресметне стойността*//

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int pow;
    printf("Enter the degree: ");
    scanf("%d", &pow);
    int product = 1;
    int i;
    for(i = 0; i < pow; i++)
    {
        product = num * product;
    }
    printf("The product is: %d", product);

return 0;

}

#include <stdio.h>
#include <math.h>

int main()
{
   float bacon1 = 9.652234;
   float bacon2 = 3.3;

   printf("bacon1 is %.2f \n", floor(bacon1));
   printf("bacon1 is %.2f \n", floor(bacon2));

   printf("bacon1 is %.2f \n", ceill(bacon1));
   printf("bacon1 is %.2f \n", ceill(bacon2));

    return 0;
}

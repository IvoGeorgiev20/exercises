#include <stdio.h>

int main()
{
   char answer;

   printf ("Do you like bagels? (y/n): ");
   scanf ("%c", &answer);

   if((5<90) || (10==10))
   {
       printf ("Good job, you didn't mess anything up");
   }
   else
   {
       printf ("Keyboards much\n");
   }

   return 0;
}

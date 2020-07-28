#include <stdio.h>

int main()
{
    int i;
    int meatballs[5] = (7,9,43,21,3);

    printf("Element \t Address \t Value \n");

    for(i=0; i<5; i++)
    {
        printf("\nmeatBalls[%d] \t \%p \n", &meatballs[i], meatballs[i]);
    }

    //array names are  just  pointers to the first element
    printf("\nmeatballs \t\t %p \n", meatballs);

    //dereferance it
    printf("\n*meatBalls \t\t %d \n", *meatballs);
    printf("\n*(meatBalls+2) \t\t %d \n", *(meatballs+2));


    return 0;
}

#include <stdio.h>

int main()
{
    int tuna ='g'

    if( isalpha(tuna) )
    {
        if(isupper(tuna) )
        {
            printf("%c is an upper case letter", tuna);
        }
        else
        {
            printf("%c is an lower case letter", tuna);
        }
    }
    else
      {
        if(isdigit(tuna) )
        {
            printf("%c is a number, tuna");
        }
        else
        {
            printf("%c is a OMG WTF is sthat!?", tuna);
        }
    }
    return 0;
}

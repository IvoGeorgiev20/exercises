#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[100];

    int n;
    printf ("Enter size of the array: ");
    scanf ("%d", &n);

    printf ("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

//*През конзолата се приемат две числа и програмата трябва да спресметне средната стойност, сумата и да намери кое от двете числа е по-малко и кое по-голямо*//

#include <stdio.h>
#define ARR_MAX 100

int main()
{
    int arr[ARR_MAX];
    int sum = 0;

    int n;
    printf ("Enter size of the array: ");
    scanf ("%d", &n);

    printf ("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    float mean = (float) sum / n;
    printf("mean is: %f\n", mean);
    printf("sum is: %d\n", sum);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    int i;
    int max;
    int min;
    int sum = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }

    }
    float mean = (float) sum / n;
    printf("mean is: %f\n", mean);
    printf("sum is: %d\n", sum);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}

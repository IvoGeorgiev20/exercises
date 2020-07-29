#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int arr[n];
    int minimum;
    int maximum;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        if(minimum > arr[i])
        {
            minimum = arr[i];
            }
            if(maximum < arr[i])
            {
            maximum = arr[i];
        }
    }

    float mean = (float) sum / n;
    printf("sum is: %d\n", sum);
    printf("mean is: %f\n", mean);
    printf("min is: %d\n", minimum);
    printf("max is: = %d\n", maximum);

    return 0;
}

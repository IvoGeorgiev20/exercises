#include <stdio.h>
#include <math.h>

int distance_calculate(int arr[], int n)
{
    int distance = 0;
    int i;
    for(i = 0; i < n; i+=4)
    {
        distance = sqrt((arr[i] - arr[i+1]) * (arr[i] - arr[i+1]) + (arr[i+2] - arr[i+3]) * (arr[i+2] - arr[i+3]));
    }
    return distance;
}


int main()
{
    int i, n, arr[100];
    printf("Enter the size of the array : \n");
    scanf("%d", &n);
    printf("Enter the numbers : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" The distance is : %d\n", distance_calculate(arr, n));
}

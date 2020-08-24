    ##include <stdio.h>

int smallest_highest(int arr[], int n)
{
    int i, j, a;
    for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
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
    printf(" From smallest to highest : \n", smallest_highest(arr, n));
    for (i  =  0 ; i  <  n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

#include <stdio.h>

int smallest_number(int size, int arr[])
{
    int min = arr[0];
    int b;
    int i;
    for(i = 0; i < size; i++)
    {
        if (arr[i] < min) min = i;
    }
    b = arr[0];
    arr[0] = arr[min];
    arr[min] = b;
}

int main()
{
  int arr[100], size, i;
  printf("Please Enter the size of an array  :  ");
  scanf("%d", &size);
  printf("Please Enter %d elements of an array : ", size);
  for(i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf(" After the smallest goes first : ", smallest_number(size, arr));
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

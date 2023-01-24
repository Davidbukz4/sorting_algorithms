#include <stdio.h>


int main()
{
    int arr[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
    int len = 10;

    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int min = i;
        for (j = i+1; j < len; j++)
            if (arr[j] < arr[min])
                min = j;
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return (0);
}

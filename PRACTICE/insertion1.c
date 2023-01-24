#include <stdio.h>

int main(void)
{
    int arr[] = {7, 9, 2, 0, 1, 6, 5, 4, 3};
    int len = 9;
    int i, j, temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (i = 0; i < 9; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

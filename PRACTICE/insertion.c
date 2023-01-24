#include <stdio.h>

int main(void)
{
    int A[5] = {5, 4, 10, 6, 2};
    int i, j, temp;

    for (i = 1; i<5; i++)
    {
        temp = A[i]; /* the beginning of unsorted list */
        j = i - 1; /* the beginning of sorted list */
        while(j >= 0 && A[j] > temp)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }

    int k;
    for (k = 0; k < 5; k++)
        printf("%d ", A[k]);
    printf("\n");
}

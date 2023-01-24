#include <stdio.h>
#define n 5

int main(void)
{
    int A[n] = {7, 4, 10, 8, 3};
    int i, j, k, temp;

    for (i=0; i<n-1; i++)
    {
        int min = i;
        for (j=i+1; j<n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }

    for (k=0; k<n; k++)
        printf("%d ", A[k]);
    printf("\n");
}

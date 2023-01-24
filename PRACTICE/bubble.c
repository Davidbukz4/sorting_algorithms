#include <stdio.h>
#define n 5

int main(void)
{
    int A[n] = {16, 14, 5, 6, 8};
    int i, j, flag, temp;

    /* bubble sort an array of values in ascending order */
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n-1-i; j++)
        {
            if (A[j] > A[j+1]) /* compares the two values */
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) /*checks if bubble sort occured(i.e the if statement)*/
            break;
    }

    int k;
    for (k = 0; k < 5; k++)
        printf("%d  ", A[k]);
    printf("\n");
}

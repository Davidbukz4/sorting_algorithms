#include <stdio.h>
#define n 9


int partition(A, lb, ub)
{
    pivot = A[lb];
    int start = lb, end = ub;
    while (start < end)
    {
        while (A[start] <= pivot)
        {
            start++;
        }
        while (A[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }
    temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;

    return end;
}

void quicksort(A, lb, ub)
{
    if (lb < vb)
    {
        loc = partition(A, lb, ub);
        quicksort(A, lb, loc-1);
        quicksort(A, loc+1, ub);
    }
}

int main(void)
{
    int A[n] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int i, j, temp;
    int lb = 0, ub = 8, pivot;

    quicksort(A, lb, ub);
}

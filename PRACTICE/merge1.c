#include <stdio.h>
void merge_sort(int arr[], int len);
void merge_sort_recursion(int arr[], int l, int r);
void merge_sorted_arrays(int arr[], int l, int m, int r);

int main(void)
{
    int arr[] = {9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
    int len = 10, i;

    merge_sort(arr, len);
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}


void merge_sort(int arr[], int len)
{
    merge_sort_recursion(arr, 0, len - 1);
}

void merge_sort_recursion(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; // middle index
        merge_sort_recursion(arr, l, m);
        merge_sort_recursion(arr, m+1, r);

        merge_sorted_arrays(arr, l, m, r);
    }
}

void merge_sorted_arrays(int arr[], int l, int m, int r)
{
    int l_len = m - l + 1;
    int r_len = r - m;

    int temp_left[l_len];
    int temp_right[r_len];

    int i, j, k;

    for (i = 0; i < l_len; i++)
        temp_left[i] = arr[l + i];

    for (i = 0; i < r_len; i++)
        temp_right[i] = arr[m + 1 + i];

    for (i=0, j=0, k=l; k <= r; k++)
    {
        if ((i < l_len) && (j >= r_len || temp_left[i] <= temp_right[j]))
        {
            arr[k] = temp_left[i];
            i++;
        }
        else
        {
            arr[k] = temp_right[j];
            j++;
        }
    }
}

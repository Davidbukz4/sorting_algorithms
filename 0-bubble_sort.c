#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, n = size;
	int temp, flag;
	for (i = 0; i < n - 1; i++)
		{
			flag = 0;
			for (j = 0; j < n - 1 - i; j++)
			{
				if (array[j] > array[j + 1]) /* compares the two values */
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0) /*checks if bubble sort occured */
			break;
		}
}

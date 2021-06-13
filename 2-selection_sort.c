#include "sort.h"
/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: array of integers
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	int i, tmp, j, min, size_comp = size;
	int iterador = size - 1;

	for (i = 0; i < iterador; i++)
	{
		min = i;
		for (j = i + 1; j < size_comp; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[min] < array[i])
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

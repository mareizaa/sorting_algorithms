#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array of integers
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;
	int tmp;
	int iterador = size - 1;

	for (i = 0; i < iterador; i++)
	{
		for (j = 0; j < iterador - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

#include "sort.h"
/**
 * quick_sort - sorts an array using the quick_sort algorithm
 * @array: array of integers
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high;

	if (array == NULL || size < 2)
		return;

	high = size - 1;
	quick_r(array, low, high, size);
}
/**
 * quick_r - sorts an array using the quick_sort algorithm
 * @array: array of integers
 * @size: Number of elements in @array
 * @low: first element of the array
 * @high: last element of the array
 */

void quick_r(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quick_r(array, low, p - 1, size);
		quick_r(array, p + 1, high, size);
	}
}
/**
 * partition - separates the array into two
 * @array: array of integers
 * @size: Number of elements in @array
 * @low: first element of the array
 * @high: last element of the array
 * Return: high
 */

int partition(int *array, int low, int high, size_t size)
{
	int j = (low - 1), pivot = array[high], i, tmp;

	for (i = low; i <= high - 1; i++)
	{
		if (array[i] < pivot)
		{
			j++;
			if (j != i)
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[j + 1] > array[high])
	{
		tmp = array[j + 1];
		array[j + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (j + 1);
}

#include "sort.h"

/**
 * swap - Function that swaps two integers in an array
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing
 **/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Function the sorts a array with the selection algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 **/

void selection_sort(int *array, size_t size)
{
	int *min_index;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = array + i;
		for (j = i + 1; j < size; j++)
			min_index = (array[j] < *min_index) ? (array + j) : min_index;
		if ((array + 1) != min_index)
		{
			swap(array + i, min_index);
			print_array(array, size);
		}
	}
}

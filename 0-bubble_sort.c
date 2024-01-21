#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

/**
 * swap - Function that swaps two integers
 * @a: integer 1
 * @b: integer 2
 * Return: void
 **/

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - bubble sort function
 * @array: Array to be sorted
 * @size: Size of array to be sorted
 * Return: void
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;


	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}

		if (!swapped)
		{
			break;
		}
	}

}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* bubble_sort - a function that sorts an array of integers in
* ascending order
* @array: array of integers
* @size: size of array
**/

void bubble_sort(int *array, size_t size)
{
	size_t s;
	size_t k;
	int temp;

	for (s = 0; s < size; s++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

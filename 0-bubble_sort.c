#include "sort.h"
/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using Bubble
 * sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * 
 * Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	int count = 1, temp = 0;
	size_t i, j;

	for (j = 0; j < size; j++)
	{
		count = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				count++;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}

		}
		if (count == 0)
			break;
	}
}

#include "sort.h"

/**
 * swap - change position between 2 position of
 * an array and print the array
 *
 * @array: array to be sorted
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 * Return: Void.
 */
void swap(int *array, int first, int last, size_t size)
{
	int temp, value;

	value = array[first];
	temp = array[last];
	array[last] = value;
	array[first] = temp;
	print_array(array, size);
}
/**
 * part - find partition position or pivot of array
 *
 * @array: array to be sorted
 * @first: lowest position
 * @last: highest position
 * @size: size of array 
 * Return: pivot index
 */
int part(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first - 1;
	int j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i < j)
				swap(array, i, j, size);
		}
	}
	if (array[i + 1] > array[last])
		swap(array, i + 1, last, size);
	return (i + 1);
}

/**
 * sorting - sorts an array of integers in
 * ascending order
 *
 * @array: array to be sorted
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 * Return: Void.
 */
void sorting(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = part(array, first, last, size);
		sorting(array, first, pivot - 1, size);
		sorting(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the quick sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	int last = size - 1;

	sorting(array, 0, last, size);
}

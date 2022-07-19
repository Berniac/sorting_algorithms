#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t j, cont = 0, pos;
	int temp, flag = 0, value;

	while (cont < size)
	{
		pos = cont;
		value = array[cont];
		for (j = cont; j < size; j++)
		{
			if (value > array[j])
			{
				flag = 1;
				value = array[j];
				pos = j;
			}
		}
		if (flag == 1)
		{
			temp = array[cont];
			array[cont] = value;
			array[pos] = temp;
			print_array(array, size);
		}
		cont++;
		flag = 0;
	}
}

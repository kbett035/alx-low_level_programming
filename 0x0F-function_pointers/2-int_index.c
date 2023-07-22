#include "function_pointers.h"
/**
 * int_index - It returns the index place if comparison = true, else -1
 * @array: arrays
 * @size: size of elems in the arrays
 * @cmp: pointer to the function of one of the 3 in main part
 * Return: Will be 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}


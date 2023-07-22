#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - it  prints each array element on a newl
 * @array: array
 * @size: how many elements to print
 * @action: pointes to the print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"

/**
 * set_bit - it sets the bit at a given index to 1
 * @n: it points to the number to change
 * @index: displays the index of the bit to set to 1
 *
 * Return: it returns 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

#include "main.h"

/**
 * clear_bit - this  sets a value of the given bit to 0
 * @n: points to the numbers to change
 * @index: this is the index of the bit to be cleared
 *
 * Return: it returns 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

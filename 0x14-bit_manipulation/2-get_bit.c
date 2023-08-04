#include "main.h"

/**
 * get_bit -this  returns the value of the bit at index in a decimal number
 * @n: this displays the numbers to search
 * @index: the  index of a bit
 *
 * Return: returns value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

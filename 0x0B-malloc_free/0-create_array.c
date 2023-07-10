#include "main.h"
#include <stdlib.h>
/**
 * create_array -first you need to create array of size and assign character c
 * @size: array size
 * @c: character to be assign
 * Description: create array of size size and assign char c
 * Return: pointer that will return the  array, NULL if it fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}


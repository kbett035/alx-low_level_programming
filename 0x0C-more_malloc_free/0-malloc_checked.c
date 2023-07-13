#include <stdlib.h>
#include "main.h"

/**
 * *maloc_checked - it allocates memory using malloc
 * @b: bytes to allocate
 *
 * Return: this is the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

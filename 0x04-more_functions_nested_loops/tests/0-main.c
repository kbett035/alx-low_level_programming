#include "../main.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isuper(c));
	c = 'a';
	printf("%c: %d\n", c, _isuper(c));
	return (0);
}

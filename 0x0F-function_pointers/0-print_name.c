#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name using pointer to function
 * @name: strings to add
 * @f: points to function
 * Return: null
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

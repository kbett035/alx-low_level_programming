#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * Return:is always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

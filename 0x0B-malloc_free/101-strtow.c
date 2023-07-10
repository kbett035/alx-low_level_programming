#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, d, wo;

	flag = 0;
	w = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wo++;
		}
	}

	return (wo);
}
/**
 * **strtow - This wil split the string into words
 * @str: Is the the string value to split
 * Return: pointer to an array of strings (Success)
 * or NULL - error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, l = 0, le = 0, words, d = 0, start, end;

	while (*(str + le))
		le++;
	words = count_word(str);
	if (w == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= le; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (d)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[l] = tmp - d;
				l++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = j;
	}

	matrix[l] = NULL;

	return (matrix);
}


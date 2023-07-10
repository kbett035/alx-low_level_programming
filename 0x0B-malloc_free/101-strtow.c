#include <stdlib.h>
#include "main.h"

/**
* count_words -This is the helper function to count the number of words in a string
* @s: string will evaluate
*
* Return: The number of words
*/
int count_words(char *s)
{
int is_word, index, word_count;

is_word = 0;
word_count = 0;

for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == ' ')
is_word = 0;
else if (is_word == 0)
{
is_word = 1;
word_count++;
}
}

return (word_count);
}

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of string during success
*         or NULL when error occurs
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, word_count, is_word = 0, start, end;

while (*(str + len))
len++;
word_count = count_words(str);
if (word_count == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (word_count + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (is_word)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (i - start + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - (i - start);
k++;
is_word = 0;
}
}
else if (!is_word)
{
start = i;
is_word = 1;
}
}

matrix[k] = NULL;

return (matrix);
}


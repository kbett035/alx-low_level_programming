#include <stdlib.h>
#include "main.h"

/**
* count_word - function to count the number of words in a string
* @s: string wiil be evaluated
* Return:This is the number of words
*/
int count_words(char *s)
{
int flag, index, word_count;

flag = 0;
word_count = 0;

for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
word_count++;
}
}

return (word_count);
}

/**
* strtow - It splits the string into words
* @str: splits string
*
* Return: pointer to an array of strings on Success
*         or NULL on error
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, word_count, c = 0, start, end;

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
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}

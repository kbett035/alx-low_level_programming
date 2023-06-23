#include "main.h"
int largest_number(int a, int b, int c);
/**
* main - tests the largest_number function
* Return: 0
*/
int main(void)
{
int a, b, c;
int largest;
a = 972;
b = -98;
c = 0;
largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}
int largest_number(int a, int b, int c)
{
int largest = a;
if (b > largest)
largest = b;
if (c > largest)
largest = c;
return largest;
}

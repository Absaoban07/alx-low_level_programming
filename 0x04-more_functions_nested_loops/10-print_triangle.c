#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check for digit
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i;
i = 1;
while (i <= size)
{
int spaces;
int hash;
spaces = size - i;
hash = i;
while (spaces > 0)
{
putchar(' ');
spaces--;
}
while (hash > 0)
{
putchar('#');
hash--;
}
putchar('\n');
i++;
}
}
}

#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check for digit
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, ii;
		while (i <= size && size > 0)
		{
			ii = 0;
			while (ii < size - i)
			{
				putchar(' ');
					i++;
			}
			ii = 0;
			while (ii < i)
			{
				putchar('#');
				ii++;
			}
			putchar('\n');
				i++;
		}
	if (i == 1)
		putchar('\n');
}

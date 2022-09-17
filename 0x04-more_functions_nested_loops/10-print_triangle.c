#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check for digit
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i, ii;
		if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((ii = size - i); ii > '0'; ii--)
			{
				putchar(' ');
			}
			for (ii = 0; ii < i; ii++)
			{
				putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
}

#include <stdio.h>
#include "main.h"

/**
 * 4-print_most_numbers.c
 * Description: prints out numbers from 0 to 9 to terminal
 * except the numbers 2 and 4.
 * Return: Void
 */
void print_most_numbers(void)
{
int n;
for (n = 48; n < 58; n++)
{
	if ((n == 50) ||(n == 52))
	{
		continue;
	}
	putchar(n);
}
}

#include "main.h"
#include <stdio.h>
/**
* print_numbers - print numbers to the terminal and return void
*
* Description: print numbers from 0 to 9 to the terminal
* Return: void
*/

void print_numbers(void)
{
	int n;

	n = '0';
		while (n < 10)
		{
			putchar('0' + n);
			n++;
		}
	putchar('\n');
}


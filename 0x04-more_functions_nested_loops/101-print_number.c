#include "main.h"
#include <stdio.h>

/**
* print_number - prints an integer
* @n: param
*/

void print_number(int n)
{
unsigned int x;
x = n;
if (n < 0)
{
putchar(45);
x = -n;
}
if (x / 10)
print_number(x / 10);
putchar((x % 10) + '0');
}

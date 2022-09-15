#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 *
 * Description: prints out numbers from 0 to 14 to the
 * terminal ten times.
 *  Return: Void
 */
void more_numbers(void)
{
char n, c;
int i = 0;
while (i < 10)
{
for (n = 0; n <= 14; n++)
{
c = n;
if (n > 9)
{
_putchar('');
c = n % 10;
}
_putchar('0' + c);
}
_putchar('\n');
i++;
}
}

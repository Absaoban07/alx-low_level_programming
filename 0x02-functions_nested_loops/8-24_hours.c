#include "main.h"
/**
 * jack_bauer - prints out every minute of the day for jack bauer
 *
 * Description: Prints out every minute of the day for jack bauer.
 * Return: Void
 */

void jack_bauer(void)
{
	int hours = '0';
	int minutes = '0';
	int hours_remindr;
	int mins_remindr;

while (hours <= 23)
{
while (minutes <= 59)
{
mins_remindr = minutes % 10;
hours_remindr = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours_remindr + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(mins_remindr + '0');
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}

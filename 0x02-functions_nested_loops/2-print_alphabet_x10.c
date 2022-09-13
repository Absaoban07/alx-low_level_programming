#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet ten times
 *
 * Description: print out all the letters of the english alphabet
 * to the screen ten times.
 * Return: Void
 */
void print_alphabet_x10(void)
{
int count = '0';
while (count < 10)
{
char al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');

count++;
}
}

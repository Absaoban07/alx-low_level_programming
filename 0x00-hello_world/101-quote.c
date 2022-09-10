#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description Write a C program that prints exactly and that
 *  piece of art is useful" - Dora Korpar, 2015-10-19,
 *  followed by a new line, to the standard error.
 * Return: (1) always
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__ ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (l));
return (1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the products of two integers.
 * @argc: argument count.
 * @argv: arg
 * Return: 0 if it works, retun 1 otherwise.
 */
int main(int argc, char argv[])
{
int i, j, prd;
if (argc != 3)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
prd = n * m;
printf("%i\n", prd);
return (0);
}

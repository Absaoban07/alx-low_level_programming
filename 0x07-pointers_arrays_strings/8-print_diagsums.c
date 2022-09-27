#include <stdio.h>
#include "main.h"
/**
*_print_diagsums - print sums  of two diagonals of a square matrix.
*@a: matrix
*@size: size of matrix.
*/
void print_diagsums(int *a, int size)
{
int ds1;
int ds2;
int r, c;
int i;
for (r = 0; r < size; r++)
{
i = (r * size) +r;
ds1 += a[i];
}
for (c = 1; c <= size; c++)
{
i = (c * size) -c;
ds2 += a[i];
}
printf("%d %d\n", ds1, ds2);
}

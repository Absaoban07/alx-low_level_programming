#include <stdio.h>
#include "main.h"
/**
*print_diagsums - print sums  of two diagonals of a square matrix.
*@a: matrix
*@size: size of matrix.
*/
void print_diagsums(int *a, int size)
{
int ds1 = 0;
int ds2 = 0;
int r;
int i;
for (r = 0; r < size; r++)
{
i = (r * size) + r;
ds1 += a[i];
}
for (r = 1; r <= size; r++)
{
i = (r * size) - r;
ds2 += a[i];
}
printf("%d %d\n", ds1, ds2);
}

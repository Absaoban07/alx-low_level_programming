#include <stdio.h>
/**
 * main - prime factors
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long long_prm = 0;
		while (num  != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			long_prm = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", long_prm);
	return (0);
}

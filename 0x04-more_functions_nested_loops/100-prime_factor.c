#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: Prints the largest prime factor of a number
 * Return: Always 0 (success)
 */
int main(void)
{
	int div;
	long num;

	div = 2;
	num = 612852475143;

	while (num > 1)
	{
		if (num % div == 0)
		{
			num = num / div;
		}
		else
		{
			div++;
		}
	}
	printf("%d\n", div);

	return (0);
}

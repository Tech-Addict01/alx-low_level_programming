#include <stdio.h>

/**
 * main - Checks the code
 * Description: Prints numbers from 1 to 100 but Fizz in place of multiples
 * of three, Buzz in place of multiples of 5, FizzBuzz inf place of multiples
 * 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int n;
	int modiv3;
	int modiv5;
	int modivp;

	for (n = 1; n <= 100; n++)
	{
		modiv3 = n % 3;
		modiv5 = n % 5;
		modivp = n % 15;

		if (modivp == 0)
		{
			printf("FizzBuzz");
		}
		else if (modiv5 == 0)
		{
			printf("Buzz");
		}
		else if (modiv3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}

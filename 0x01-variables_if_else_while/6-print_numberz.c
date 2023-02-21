#include <stdio.h>
/**
 * main - entry point
 * Description:print  all numbers base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');
	return (0);

}

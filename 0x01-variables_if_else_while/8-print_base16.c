#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char x;
	char ch;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

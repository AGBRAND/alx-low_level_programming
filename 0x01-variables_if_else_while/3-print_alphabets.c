#include <stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Return: Always (Validated)
 */
int main(void)
{
	char c;


	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

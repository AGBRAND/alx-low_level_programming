#include <stdio.h>

/**
 * main - Prints in reverse the alphabet
 *
 * Return: Always (Validated)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main - Entry point
 *
 * Prints_alphabet -> in lower case followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}

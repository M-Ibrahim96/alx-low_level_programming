#include "main.h"

/**
 * print_rev - print for all string rev
 * followed by a new line
 * @s: pointer t ostring
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

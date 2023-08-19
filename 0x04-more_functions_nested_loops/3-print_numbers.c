#include "main.h"

/**
 * print_numbers - print 0123456789
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	while (c <= 48 + 9)
	{
		_putchar(c);
	}
	_putchar('\n');
}

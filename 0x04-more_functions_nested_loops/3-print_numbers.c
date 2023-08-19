#include "main.h"

/**
 * print_numbers - print 0123456789
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char c;

	while (c < '9')
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - print 0123456789
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + 48);
		c++;
	}
	_putchar('\n');
}

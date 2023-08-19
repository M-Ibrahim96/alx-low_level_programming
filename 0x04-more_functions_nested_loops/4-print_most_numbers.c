#include "main.h"

/**
 * print_most_numbers - print 0123456789
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if ((c  == 2 || c  == 4)
				continue;
		else
		_putchar(c + 48);
		c++;
	}
	_putchar('\n');
}

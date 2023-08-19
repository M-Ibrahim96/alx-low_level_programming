#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			_putchar('1');
			_putchar(col % 10 + '0');
		}
		_putchar('\n');
	}
}

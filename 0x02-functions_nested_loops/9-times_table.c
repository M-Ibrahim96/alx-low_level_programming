#include "main.h"

/**
 * times_table - prints multiplie of numbers  9 times table, starting with 0
 */
void times_table(void)
{
	int n1, n2, mult;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar('0');

		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');

			mult = n1 * n2;

			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}

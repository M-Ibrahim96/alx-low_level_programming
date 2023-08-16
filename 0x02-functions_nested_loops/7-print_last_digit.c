#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: is checked which we are asking for
 * Return: the last digit of number
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;

	_putchar(digit + 48);
	return (digit);
}

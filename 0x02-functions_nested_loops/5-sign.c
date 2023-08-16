#include "main.h"

/**
 * print_sign - that prints +, - or 0
 * Description: it is recived a number
 * @n: is number which we are checking
 * Return: 1 if > 0, 0 if is zeor and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

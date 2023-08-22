#include "main.h"

/**
 * _puts - function print a string followed by a newline
 * @str: string paratmeters to print
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '0');
		str++;
	}
	_putchar('\n');
}

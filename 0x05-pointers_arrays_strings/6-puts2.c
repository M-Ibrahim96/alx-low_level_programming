#include "main.h"

/**
 * puts2 - function prints every character of string
 * @str: string parameter input
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int o;

	for (o = 0; str[o] != '\0'; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}
	_putchar('\n');
}

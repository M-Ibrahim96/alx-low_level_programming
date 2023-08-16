#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase from a - z
 * Descpritopn: prints from a to z in lowercase
 * without return
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

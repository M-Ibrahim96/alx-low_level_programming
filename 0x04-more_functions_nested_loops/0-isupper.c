#include "main.h"

/**
 * _isupper - uppercase
 * @c: character to checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

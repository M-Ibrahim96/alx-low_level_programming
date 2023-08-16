#include "main.h"

/**
 * _isalpha - check letter
 * @c: is checked for alpha or not
 * Return: 1 if letter
 * 0 if something else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

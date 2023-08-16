#include "main.h"

/**
 * _islower - check character
 * @c: The character to be checked.
 * character is checked
 * @c is that character which is entered
 * Return: 0 if no lowercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

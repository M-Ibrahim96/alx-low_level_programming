#include "main.h"

/**
 * _strlen - fucntion that prints length of string
 *
 * @s: string parameter input
 * Return: Length of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0';	s++)
	{
		c++;
	}
	return (c);
}

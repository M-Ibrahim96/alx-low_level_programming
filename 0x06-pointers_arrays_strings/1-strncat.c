#include "main.h"

/**
 * _strncat - function use the most n bytes from src
 * Description:
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}

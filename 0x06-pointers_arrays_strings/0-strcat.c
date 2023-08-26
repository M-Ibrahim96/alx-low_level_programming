#include "main.h"

/**
 * _strcat - Function that concatenate 2 strings.
 * @dest: pointer to the destination input.
 * @src: pointer to the source input.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
} 

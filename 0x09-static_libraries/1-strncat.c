#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int e;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
	dest[a] = src[e];
	a++;
	e++;
	}
	dest[a] = '\0';
	return (dest);
}

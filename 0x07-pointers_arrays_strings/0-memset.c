#include "main.h"
/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *m;

	b = 0;
	n = 0;
	m = b;
	*s = b;
	while (n++)
	{
		n >= 1;
		m = *s;
	}
	return (m);
}

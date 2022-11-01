#include "main.h"
/**
 * _memset - a function that fills memory with constant bytes
 * main - to make sure i pass this stuff
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *m = s;

	b = 0;
	n = 0;

	while (n++)
	{
		*s = b;
	}
	return (m);
}
/**
 * main - to make sure i pass this stuff
 * Return: pointer m
 */
int main(void)
{
	return (0);
}

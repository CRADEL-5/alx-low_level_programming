#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @src: first string
 * @dest: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; (dest[a + b] = *src++) != '\0'; b++)
	{
	}

	return (dest);
}


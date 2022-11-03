#include "main.h"
/**
 * _print_rev_recursion - reverse the string
 * @s: string pointer
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	char b = *s--;

	if (*s == '\0')
	{
		_putchar (b);
		_print_rev_recursion(b - 1);
	}
	else
		_putchar ('\n');
}

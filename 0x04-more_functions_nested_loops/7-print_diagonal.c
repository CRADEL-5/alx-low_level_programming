#include "main.h"
/**
 * print_diagonal - the number of times the character \ should be printed
 * @n: the number of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}

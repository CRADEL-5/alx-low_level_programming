#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int co, ro, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; co <= (size - 1); co++)
		{
		for (sp = 0; sp < (size - 1) - co; sp++)
			{
			_putchar(' ');
			}
		for (ro = 0; ro <= co; ro++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}

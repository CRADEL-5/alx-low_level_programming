#include "main.h"
/**
 * print_square -  prints a square, followed by a new line.
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int sq, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sq = 1; sq <= size; sq++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

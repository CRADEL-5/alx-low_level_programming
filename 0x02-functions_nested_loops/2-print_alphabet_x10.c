#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, on a line.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

		while (count <= 9)
			count++;
	{
			for  (ch = 'a'; ch <= 'z'; ch++)
				_putchar(ch);
		_putchar('\n');
	}
}

#include <stdio.h>
/**
 * main - entry point
 * Result: Always 0(Success)
 */
int main(void)
{
	int ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
			putchar (ch);
	}
	putchar ('\n');

	return (0);
}

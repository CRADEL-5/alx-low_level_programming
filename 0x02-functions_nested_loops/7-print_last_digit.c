#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @c:number
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
		n = -1 * (c % 10);
	else
		n = n (c % 10);

	return (n % 10);
}

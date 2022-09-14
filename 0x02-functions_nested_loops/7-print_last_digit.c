#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (c < 0)
		ld = 0 - ld;
	_putchar(ld + '0');
	return (ld);
}

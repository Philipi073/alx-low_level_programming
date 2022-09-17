#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: digit to check
 * Return: 1 if digit and 0 if othrewise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

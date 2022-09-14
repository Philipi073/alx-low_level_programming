#include "main.h"
/**
 * _islower - checks for lower case
 * @c: character to check
 * Description: when _islower is called, it returns 0 or 1
 * Return: 0 or 1
 */
int __islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


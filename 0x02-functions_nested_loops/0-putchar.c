#include "main.h"
/**
 * main - Entry point
 * Description: A program that prints putchar
 * Return:0
 */

int main(void)
{
	char ch[] = "_putchar";
	int j = 0;

	while (j < 8)
	{
		_putchar(ch[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}

#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times on new lines
 * @void: no arguement
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

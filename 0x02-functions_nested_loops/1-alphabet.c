#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * @void: no argument
 * Retur: nothing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z';  alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

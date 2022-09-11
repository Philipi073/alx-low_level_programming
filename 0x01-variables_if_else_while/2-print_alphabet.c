#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * Description: prints alphabets
 * Return:0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}

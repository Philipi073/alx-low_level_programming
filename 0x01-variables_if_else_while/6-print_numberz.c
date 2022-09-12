#include<stdio.h>
/**
 * main - Entry point
 * Description: outputs numbers
 * Return:0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}

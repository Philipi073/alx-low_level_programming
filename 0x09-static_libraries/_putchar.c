#include <unistd.h>
/**
 * _putchar - writes charcter c to stdout
 * Description: c is the character to return
 * @c: character
 * Return: on success 1
 * On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

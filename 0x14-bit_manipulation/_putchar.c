#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a char c to stdout
 * @c: char to print
 *
 * Return: 1 (Success).
 * If error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

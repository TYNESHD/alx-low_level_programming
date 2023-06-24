#include "main.h"
/**
 * _puts_recursion - Print a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);        /* prints the last letter*/
		_puts_recursion(s + 1);
	}

i	else
		_putchar('\n');
}

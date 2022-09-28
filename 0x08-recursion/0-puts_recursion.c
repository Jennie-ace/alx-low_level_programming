#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (strlen(s) < 1)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

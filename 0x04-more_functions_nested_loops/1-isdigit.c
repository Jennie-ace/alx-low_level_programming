#include "main.h"
/**
 * _isdigit - function that checks if its a digit
 * @c: takes in a character/digit
 * Return: 1 if digit ans 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

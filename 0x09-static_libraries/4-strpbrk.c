#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of the set of bytes
 * @s: string to search
 * @accept: set of byte to search for
 * Description: returns first occurance in a string
 * Return: pointer to first instance of stting.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}


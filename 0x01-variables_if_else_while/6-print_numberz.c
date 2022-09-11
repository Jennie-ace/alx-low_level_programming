#include <stdio.h>
/**
 * main - print all single digit numbers using only putchar
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

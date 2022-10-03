#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply 2 variables supplied at command line
 * @argc: number of actual arguments
 * @argv: pointer to the argument supplied
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	exit(EXIT_SUCCESS);
}

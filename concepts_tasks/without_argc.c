#include"main.h"

/**
 * main - printing all arguments without using argc
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	char **ptr;

	for (ptr = argv; *ptr != NULL; ptr++)
	{
		printf("%s\n", *ptr);
	}
	return (0);
}

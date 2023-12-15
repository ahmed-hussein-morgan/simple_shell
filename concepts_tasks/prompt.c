#include "main.h"
/**
 * main - prints "$ ",
 * 	wait for the user to enter a command, 
 * 	prints it on the next line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int command_line;
	char *buffer = NULL;
	size_t n = 0;


	write(1, "$ ", 2);
	command_line = getline(&buffer, &n, stdin);
	if (command_line == -1)
	{
		perror("reading coomand line failed");
		return (1);
	}
	write(STDOUT_FILENO, buffer, command_line);


	return (0);
}
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
	size_t n = 0;
	char *buf = malloc(sizeof(char) * SIZE);
	int read_chars = 0;


	/*do
	{
				write(1, "$ ", 2);
		read_chars = getline(&buf, &n, stdin);
	} while (read_chars != EOF);
	write(1, buf, read_chars);*/
	write(1, "$ ", 2);
	/*read_chars = getline(&buf, &n, stdin);*/
	while (read_chars)
	{
		read_chars = getline(&buf, &n, stdin);
		if(read_chars == -1)
		{
			write(1, buf, read_chars);
			break;
		}
		else
		{
			write(1, "$ ", 2);
		}
		/*write(1, "$ ", 2);*/
		/*read_chars = getline(&buf, &n, stdin);*/
	}
	/*write(1, buf, read_chars);*/
	
	/*while (getline(&buf, &n, stdin) != -1)
	{
		write(1, "$ ", 2);
	}*/

	free(buf);

	return (0);
}
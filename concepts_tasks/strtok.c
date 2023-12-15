#include "main.h"

char *_strtok(char *str, const char *delim)
{
	char *ptr;

	ptr = strtok(str, delim);
	printf("%s\n", ptr);

	while (ptr != NULL)
	{
		ptr = strtok(NULL, delim);
		printf("%s\n", ptr);
	}
	return (ptr);
}

int main(void)
{
	char *str = "hello it is my first strtok() function.";
	char *d = " ";
	/*char *token;*/

	/*token = _strtok(&str, &d);*/
	_strtok(str, d);
	/*printf("%s\n", token);*/

	return (0);
}
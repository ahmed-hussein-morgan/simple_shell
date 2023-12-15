#include "main.h"

int main(void)
{
	char *line_buf = NULL;
	size_t n = 0;
	size_t read_chars;

	printf("what is your name?");
	read_chars = getline(&line_buf, &n, stdin);
	/*getline(&line_buf, &n, STDIN_FILENO);*/
	if (read_chars == -1)
	{
		perror("read line failed");
		return (1);
	}
	printf("name is %s size is %li", line_buf, n);

	free(line_buf);

	return (0);
}

#include "main.h"

int main(void)
{
	char arr[SIZE];
	size_t read_chars;

	printf("what is your name?");
	read_chars = getline(arr, SIZE, STDIN_FILENO);
	printf("name is %s size is %ld", arr, SIZE);
	
	return (0);
}

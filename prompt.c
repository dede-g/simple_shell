#include "main.h"

/**
 * prompt_user - prompts user for input
 * @lineptr: pointer to input line
 * @n: pointer to size of input
 *
 * Return: Nothing
 */
void prompt_user(char **lineptr, size_t *n)
{
	ssize_t nread;

	printf("MyShell$ ");
	nread = getline(lineptr, n, stdin);
	if (nread == -1)
	{
		perror("Exit Shell");
		exit(1);
	}
}

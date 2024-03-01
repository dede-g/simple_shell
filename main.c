#include "main.h"

/**
 * main - main entry point for program
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char **args;
	char *lineptr = NULL;
	size_t n = 0;
	(void)argc, (void)argv;

	while (1)
	{
		prompt_user(&lineptr, &n);

		args = tokenize_input(lineptr);

		execute_input(args);

		free(args);
	}
	free(lineptr);
	return (0);
}

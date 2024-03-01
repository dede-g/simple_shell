#include "main.h"

/**
 * tokenize_input - tokenize input string
 * @lineptr: input string
 *
 * Return: Array of tokenized string
 */
char **tokenize_input(char *lineptr)
{
	char *token_ptr;
	char **args;
	int i;

	token_ptr = strtok(lineptr, " \n");

	args = malloc(sizeof(char *) * 1024);
	if (args == NULL)
	{
		perror("Memory Allocation failed");
		exit(EXIT_FAILURE);
	}
	i = 0;

	while (token_ptr != NULL)
	{
		args[i] = token_ptr;
		token_ptr = strtok(NULL, " \n");
		i++;
	}
	args[i] = NULL;
	return (args);
}

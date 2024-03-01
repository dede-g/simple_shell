#include "main.h"

/**
 * execute_input - executes the given input command using execve
 * @args: tokenized input
 *
 * Return: Nothing
 */
void execute_input(char **args)
{
	pid_t my_pid;
	int wstatus;

	my_pid = fork();
	if (my_pid == -1)
	{
		perror("Fork Failed");
		exit(41);
	}
	if (my_pid == 0) /* Child process */
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Execve Failed");
			exit(97);
		}
	}
	else /* parent process */
	{
		wait(&wstatus);
	}
}

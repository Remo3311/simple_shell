#include "shell.h"

/**
 * exec_com - ENTRY point
 *
 * @command: a variable
 */

void exec_com(const char *command)

{
	pid_t proses_pid = fork();

	if (proses_pid == -1)
	{
	perror("fork");
	exit(EXIT_FAILURE);
	}
	else if (proses_pid == 0)
	{
	execlp(command, command, (char *)NULL);
	perror("execlp");
	exit(EXIT_FAILURE);
	}
	else
	{
	wait(NULL);
	}
}

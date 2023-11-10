#include "shell.h"

/**
 * blockExecute - it runs the block of code.
 * @cmd: block of code
 * @shell: shell
 * @i: an index
 * Return: stat
*/
int blockExecute(char **cmd, char **shell, int i)
{
	pid_t kid;
	int stat;
	char *path;

	path = blockPath(cmd[0]);
	if (!path)
	{
		errorPrinter(shell[0], cmd[0], i);
		stringFree(cmd);
		return (127);

	}
	kid = fork();
	if (kid == 0)
	{
		if (execve(path, cmd, environ) == -1)
		{
			perror("execve");
			free(path);
			path = NULL;
			stringFree(cmd);
			exit(1);
		}
	}
	else
	{
		waitpid(kid, &stat, 0);
		stringFree(cmd);
		free(path);
		path = NULL;
	}
	return (WEXITSTATUS(stat));
}

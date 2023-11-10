#include "shell.h"

/**
 * builtIn - runs the built-ins.
 * @cmd: the block of code
 * @shell: shell
 * @theExit: exit parameter
 * @i: index
 * Return: void
*/
void builtIn(char **cmd, char **shell, int *theExit, int i)
{
	(void) shell;
	(void) i;

	if (stringCompare(cmd[0], "exit") == 0)
	{
		stringFree(cmd);
		*theExit = 1;
	}
	else if (stringCompare(cmd[0], "env") == 0)
	{
		int i;

		for (i = 0; environ[i]; i++)
		{
			write(1, environ[i], stringLength(environ[i]));
			write(1, "\n", 1);
		}
		stringFree(cmd);
	}
}

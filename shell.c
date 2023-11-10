#include "shell.h"

/**
 * main - sh clone
 * @filler: filler
 * @shell: shell
 * Return: stat
*/
int main(int filler, char **shell)
{
	char *block = NULL;
	char **cmd = NULL;
	int stat = 0, i = 0, theExit = 0;
	(void) filler;

	while (!theExit)
	{
		block = blockReader();
		if (block == NULL)
		{
			if (isatty(0))
			{
				write(1, "\n", 1);
			}
			return (stat);
		}
		if (stringChecher(block, " \t\n") == (size_t)stringLength(block))
		{
			free(block);
			continue;
		}
		i++;
		cmd = blockSplitter(block);
		if (cmd == NULL)
		{
			continue;
		}
		if (blockIsBuiltIn(cmd[0]))
		{
			builtIn(cmd, shell, &theExit, i);
		}
		else
		{
		stat = blockExecute(cmd, shell, i);
		}
		free(block);
	}
	return (stat);
}

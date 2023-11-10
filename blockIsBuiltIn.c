#include "shell.h"

/**
 * blockIsBuiltIn - checks if the block of code in built-in.
 * @cmd: the block of code
 * Return: 1 or 0
*/
int blockIsBuiltIn(char *cmd)
{
	char *builtins[] = {"exit", "env", NULL};
	int i = 0;

	while (builtins[i])
	{
		if (stringCompare(cmd, builtins[i]) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

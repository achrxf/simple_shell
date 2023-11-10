#include "shell.h"

/**
 * blockPath - works with PATH
 * @cmd: block of code
 * Return: path or NULL
*/
char *blockPath(char *cmd)
{
	char *pathEnv, *path, *file;
	int i = 0;
	struct stat test;

	while (cmd[i])
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &test) == 0)
			{
				return (stringTwins(cmd));
			}
			return (NULL);
		}
		i++;
	}
	pathEnv = getEnviron("PATH");
	if (!pathEnv)
		return (NULL);
	file = strtok(pathEnv, ":");
	while (file)
	{
		path = malloc(stringLength(file) + stringLength(cmd) + 2);
		if (path)
		{
			stringCopy(path, file);
			stringConcatenate(path, "/");
			stringConcatenate(path, cmd);
			if (stat(path, &test) == 0)
			{
				free(pathEnv);
				return (path);
			}
			free(path), path = NULL;
			file = strtok(NULL, ":");
		}
	}
	free(pathEnv);
	return (NULL);
}

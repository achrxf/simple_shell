#include "shell.h"

/**
 * blockReader - reads the block of code from stdin.
 * Return: the block of code
*/
char *blockReader(void)
{
	char *block = NULL;
	size_t length = 0;
	ssize_t getblock;

	if (isatty(0))
	{
		write(1, "$ ", 2);
	}
	getblock = getline(&block, &length, stdin);
	if (getblock == -1)
	{
		free(block);
		block = NULL;
		return (NULL);
	}
	if (getblock > 0 && block[getblock - 1] == '\n')
	{
		block[getblock - 1] = '\0';
	}
	return (block);
}

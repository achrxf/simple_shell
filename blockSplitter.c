#include "shell.h"

/**
 * blockSplitter - splits the block of code if there is flags involved.
 * @block: the block of code
 * Return: the splited code
*/
char **blockSplitter(char *block)
{
	char *stamp = NULL, *blockTwin = NULL;
	char **cmd = NULL;
	int counter = 0, sum, x = 0;

	if (!block)
	{
		return (NULL);
	}
	blockTwin = stringTwins(block);
	stamp = strtok(blockTwin, " \t\n");
	while (stamp)
	{
		if (stringLength(stamp) > 0)
		{
			counter++;
		}
		stamp = strtok(NULL, " \t\n");
	}
	free(blockTwin);
	blockTwin = NULL;
	sum = counter + 1;
	cmd = malloc(sizeof(char *) * sum);
	stamp = strtok(block, " \t\n");
	while (stamp)
	{
		if (stringLength(stamp) > 0)
		{
			cmd[x] = stringTwins(stamp);
			x++;
		}
		stamp = strtok(NULL, " \t\n");
	}
	cmd[x] = NULL;
	if (counter == 0)
	{
		stringFree(cmd);
		return (NULL);
	}
	return (cmd);
}

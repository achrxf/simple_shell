#include "shell.h"

/**
 * getEnviron - gets the environ
 * @var: variable
 * Return: rateclone or NULL
*/
char *getEnviron(char *var)
{
	int i = 0;
	char *clone, *type, *rate, *rateClone;

	while (environ[i])
	{
		clone = stringTwins(environ[i]);
		if (clone == NULL)
		{
			return (NULL);
		}
		type = strtok(clone, "=");
		if (stringCompare(type, var) == 0)
		{
			rate = strtok(NULL, "\n");
			rateClone = stringTwins(rate);
			free(clone);
			clone = NULL;
			return (rateClone);
		}
		free(clone);
		clone = NULL;
		i++;
	}
	return (NULL);
}

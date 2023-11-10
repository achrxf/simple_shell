#include "shell.h"

/**
 * stringTwins - clones a string
 * @string: string
 * Return: the clone
*/
char *stringTwins(const char *string)
{
	const char *holder;
	int i = 0, length = 0;
	char *p;

	if (string == NULL)
	{
		return (NULL);
	}
	holder = string;
	while (holder[length] != '\0')
	{
		length++;
	}
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		p[i] = holder[i];
		i++;
	}
	return (p);
}

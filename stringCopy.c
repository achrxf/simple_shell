#include "shell.h"

/**
 * stringCopy - copy one string to two string.
 * @one: string 1
 * @two: string 2
 * Return: string 1
*/
char *stringCopy(char *one, char *two)
{
	int i = 0;

	while (two[i])
	{
		one[i] = two[i];
		i++;
	}

	one[i] = '\0';
	return (one);
}

#include "shell.h"

/**
 * stringFree - frees the memory of a string
 * @string: string
 * Return: void
*/
void stringFree(char **string)
{
	int x = 0;

	if (string == NULL)
	{
		return;
	}
	while (string[x])
	{
		free(string[x]);
		string[x] = NULL;
		x++;
	}
	free(string);
	string = NULL;
}

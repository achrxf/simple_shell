#include "shell.h"

/**
 * stringLength - returns the length of a string.
 * @string: string
 * Return: length
*/
int stringLength(char *string)
{
	int length = 0;

	while (string[length])
	{
		length++;
	}
	return (length);
}

#include "shell.h"

/**
 * stringConcatenate - concatenate two string
 * @one: string 1
 * @two: string 2
 * Return: string 1
*/
char *stringConcatenate(char *one, char *two)
{
	char *pointer = one;

	while (*pointer)
	{
		pointer++;
	}
	while (*two)
	{
		*pointer = *two;
		pointer++;
		two++;
	}
	*pointer = '\0';
	return (one);
}

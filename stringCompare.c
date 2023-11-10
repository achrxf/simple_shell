#include "shell.h"

/**
 * stringCompare - compares two string
 * @one: string 1
 * @two: string 2
 * Return: result
*/
int stringCompare(const char *one, const char *two)
{
	int result = 0;

	while (*one && (*one == *two))
	{
		one++;
		two++;
	}
	result = *(unsigned char *)one - *(unsigned char *)two;
	return (result);
}

#include "shell.h"

/**
 * stringReverser - reverse a string
 * @string: string
 * @length: length of the string
 * Return: void
*/
void stringReverser(char *string, int length)
{
	char clone;
	int a = 0;
	int z = length - 1;

	while (a < z)
	{
		clone = string[a];
		string[a] = string[z];
		string[z] = clone;
		a++;
		z--;
	}
}

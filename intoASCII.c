#include "shell.h"

/**
 * intoASCII - intoASCII
 * @x: index
 * Return: buf
*/
char *intoASCII(int x)
{
	char buf[17];
	int i = 0;

	if (x == 0)
	{
		buf[i++] = '0';
	}

	else
	{
		while (x > 0)
		{
			buf[i++] = (x % 10) + '0';
			x /= 10;
		}
	}

	buf[i] = '\0';
	stringReverser(buf, i);

	return (stringTwins(buf));
}

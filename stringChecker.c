#include "shell.h"

/**
 * stringChecher - checkes the string
 * @string: string
 * @ok: ok
 * Return: counter
*/
size_t stringChecher(const char *string, const char *ok)
{
	const char *i = string;
	size_t counter = 0;

	while (*i)
	{
		const char *j = ok;
		int x = 0;

		while (*j)
		{
			if (*i == *j)
			{
				x = 1;
				break;
			}
			j++;
		}
		if (x)
		{
			counter++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (counter);
}

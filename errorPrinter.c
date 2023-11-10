#include "shell.h"

/**
 * errorPrinter - prints the standered error as in sh
 * @shell: shell
 * @cmd: the block of code
 * @index: index
 * Return: void
*/
void errorPrinter(char *shell, char *cmd, int index)
{
	char *i, error[] = ": not found\n";

	i = intoASCII(index);
	write(2, shell, stringLength(shell));
	write(2, ": ", 2);
	write(2, i, stringLength(i));
	write(2, ": ", 2);
	write(2, cmd, stringLength(cmd));
	write(2, error, stringLength(error));
	free(i);
}

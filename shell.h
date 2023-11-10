#ifndef SHELL_H
#define SHELL_H

/*****LIBRARIES*****/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stddef.h>

/*****ENVIRON*****/
extern char **environ;

/*****MAIN*****/
char *blockReader(void);
char **blockSplitter(char *block);
int blockExecute(char **cmd, char **shell, int i);

/*****STRING MANIPULATERS*****/
void stringFree(char **string);
int stringCompare(const char *one, const char *two);
int stringLength(char *string);
char *stringConcatenate(char *one, char *two);
char *stringCopy(char *one, char *two);
char *stringTwins(const char *string);
void stringReverser(char *string, int length);
size_t stringChecher(const char *str, const char *accept);

/*****OTHER TOOLS******/
char *getEnviron(char *var);
char *blockPath(char *cmd);
void errorPrinter(char *shell, char *cmd, int index);
char *intoASCII(int x);
int blockIsBuiltIn(char *cmd);
void builtIn(char **cmd, char **shell, int *stat, int i);

#endif

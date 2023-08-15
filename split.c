#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *_split - a function that splits a string
 *and returns an array of each word of the string.
 *@str: string to be split.
 *Return : an array of strings.
 */

char **_split( char *str)
{
	char **buf = malloc(sizeof(char *) * 120);
	char *token;
	int i = 0;
	

	token = strtok(str, " ");

	while (token)
	{
		buf[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	buf[i] = token;
	return (buf);
}



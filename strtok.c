#include "main.h"


/**
 * _strtok - a function that extract tokens from strings.
 * @str: string to be tokenized.
 * @delim: delimiting byte.
 * 
 * Return: return a pointer to the next token, or NULL if there are no more tokens.
 */

char *_strtok(char *str, const char *delim)
{
	char *token = str, *nxt;
	int i = 0, j = 0;

	while (delim[i])
	{
		while (str[j])
		{
			if(str[j] == delim[i])
			{
				str[j] = '\0';
				return (token);
			}
			j++;

		}
		i++;
	}
	token = NULL;
	return (token);
}

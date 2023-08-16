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
	char *token = NULL;
	static char *start = NULL;
	int i = 0, j = 0, flag = 0;

	if (str == NULL)
	{
		if (start)
			token  = start;
		else
			return (token);
	}
	else
		token = str;
	while (token[i])
	{
		j = 0;
		flag = 0;
		while (delim[j])
		{
			if (token[i] == delim[j])
			{
				flag = 1;
				token++;
				break;
			}
			j++;
		}
		if (!flag)
		{
			while (token[i])
			{
				j = 0;
				while (delim[j])
				{
					if (token[i] == delim[j])
					{
						token[i] = '\0';
						start = token + i + 1;
						return (token);
					}
					j++;
				}
				i++;
			}
			start = NULL;
			return (token);
		}
		i++;
	}
	token = NULL;
	return (token);
}

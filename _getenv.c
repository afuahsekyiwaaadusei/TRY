#include "main.h"
#include <stdio.h>

/**
 *_getenv -  a function that gets an environment variable. 
 *@name: name of variable.
 *
 *Return: a pointer to the value in the environment, or NULL if there is no match.
 */

char *_getenv(const char *name)
{
	char **env = environ;
	int i = 0 , x = 0, j = 0, flag = 0;
	
	while (env[i])
	{
		while (env[i][x] != '=')
		{
			if (env[i][x] != name[j])
			{
				flag = 1;
				break;
			}
			x++;
			j++;
		}
		if (!flag)
		{
			x++;
			break;
		}
		x = 0;
		j = 0;
		flag = 0;
		i++;
	}
	if (!flag)
		return ((env[i] + x));
	return (NULL);
}

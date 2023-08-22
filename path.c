#include <stdlib.h>
#include <stdio.h>

/**
 *path - a function that prints each directory contained in the the environment variable PATH, one directory per line.
 *
 *Return: always 0.
 */

int path(void)
{
	char *env = getenv("PATH");
	char *buf = malloc(sizeof(char) * 120);
	int i = 0, x = 0;
	
	printf ("env is %s\n", env);
	while (env[i])
	{
		if (env[i] == ':')
		{
			buf[x] = '\0';
			printf("%s\n", buf);
			x = 0;
		}
		else
		{
			buf[x] = env[i];
			x++;
		}
		i++;
	}
	buf[x] = '\0';
	printf("%s\n", buf);
	free (buf);
	return (0);
}

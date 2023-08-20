#include <stdio.h>

/**
 *main - prints the environment
 *@ac: argument count.
 *@av: argument array.
 *@env: environment.
 *
 *Return: always 0.
 */

int main(int ac, char **av, char **env)
{
	int i = 0;

	while(env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}


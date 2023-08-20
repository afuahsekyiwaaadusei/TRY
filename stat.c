#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 *main - examle of stat.
 *@ac: count of arguements.
 *@av: array ofarguments strings.
 *
 * Return: always 0.
 */

int main(int ac, char **av)
{
	struct stat st;
	int i = 1;

	if (ac < 2)
	{
		printf(" add more arguments");
		return (1);
	}
	while (i < ac)
	{
		if (stat(av[i], &st) == 0)
		{
			printf("%s: FOUND\n", av[i]);
		}
		else
		{
			printf("%s : NOT FOUND\n", av[i]);
		}
		i++;
	}
	return (0);
}

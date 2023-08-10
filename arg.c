#include <stdio.h>



/**
 * main - a program that prints all it's arguements without using ac.
 * * @ac: count of all arguements passed to the program.
 * @av: a null terminated string of arguements passed to the program.
 *
 * Return: always 0.
 */

int main(int ac, char **av)
{
	int i = 0;

	(void)ac;
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
extern char **environ;

/**
 *main - a program that prints the address of env and eviron.
 *@ac: argument count.
 *@av: argument vector.
 *@env: environment.
 *
 *Return: always 0.
 */
int main(int ac, char **av, char **env)
{
	printf("adress of env is %p & adress of environ is %p\n", (void *)&env, (void *)&environ);
	return (0);
}

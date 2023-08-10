#include <stdio.h>
#include <unistd.h>

/**
 *main - a program that prints "$ ",
 *wait for the user to enter a command, prints it on the next line.
 *
 *Return: always 0.
 */
int main(void)
{
	ssize_t nread;
	char *line = NULL;
	size_t n = 0;

	printf("$ ");
	nread = getline(&line, &n, stdin);
	if (nread != -1)
	{
		printf("%s", line);
	}
	return (0);
}

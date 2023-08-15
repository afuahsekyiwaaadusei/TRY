#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program to test written functions.
 *
 *Return: always zero.
 */

int main(void)
{
	char *line;
	size_t n;
	ssize_t nread;

	n = 0;
	line = NULL;
	nread = _getline(&line, &n, stdin);
	printf("My function results %ld: %s: %ld", nread, line, n);
	nread = getline(&line, &n, stdin);
	printf("Original function results %ld: %s : %ld", nread, line, n);
	return (0);
}

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 *main - a super simple shell that can run commands with
 *their full path, without any argument.
 *
 *Return: zero on success.
 */

int main(void)
{
	char buf[] = "#cisfun ";
	ssize_t nwrite;
	ssize_t nread;
	char *line = NULL;
	size_t n = 0;
	pid_t pid;
	char *argv[2];

	nwrite = write(STDOUT_FILENO, buf, sizeof(buf));
	if (nwrite == -1)
	{
		perror("Write:");
		return (1);
	}
	while ((nread = getline(&line, &n , stdin)) != -1)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("fork:");
			return (1);
		}
		if (pid == 0)
		{
			line[nread - 1] = '\0';
			argv[0] = line;
			argv[1] = NULL;
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Exceve:");
				return (1);
			}
		}
		else
		{
			wait(NULL);
			free(line);
			line = NULL;
			n = 0;
			nwrite = write(STDOUT_FILENO, buf, sizeof(buf));
			if (nwrite == -1)
			{
				perror("Write:");
				return (1);
			}
		}
	}
	return (0);
}

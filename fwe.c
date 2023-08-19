#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>


/**
 *main - a program that executes the command ls -l /tmp in 5 different child processes. 
 *Each child is created by the same process.
 *Wait for a child to exit before creating a new child.
 *
 *Return: zero on success.
 */

int main(void)
{
	pid_t pid;
	int i = 0;
	char *argv[] = {"/bin/ls", "-l", NULL};

	while (i < 5)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Execve:");
				return (1);
			}
		}
		else
		{
			wait(NULL);
			printf("child %d created\n", (i + 1));
			fflush(stdout);
			i++;
		}
	}
	return (0);
}


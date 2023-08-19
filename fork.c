#include <unistd.h>
#include <stdio.h>

/**
 *main - fork example.
 *
 *Return: always 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is : %u and pid is %u\n", my_pid, pid);
	return (0);
}

#include <unistd.h>
#include <stdio.h>

/**
 *main - a program to print pid, and ppid.
 *
 *Return: always 0.
 */

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("pid is %d and ppid is %d\n", pid, ppid);
	return (0);
}

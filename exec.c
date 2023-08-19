#include <unistd.h>
#include <stdio.h>
/**
 *main - execve example.
 *
 * Return: always zero.
 * */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:\n");
	}
	printf("Avter execve:\n");
	return (0);


}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *env = getenv("HOME");
       	printf("%s\n", env);
	int flag = setenv("HOME", "/roooooooooooooooooot", 1);
       	if (flag >= 0)
	{
		env = getenv("HOME");
		printf("%s\n", env);
		env = getenv("LANG");
		printf("%s\n", env);
	}
	return 0;
}








/*int main(void)
{
	ssize_t nread;
	size_t n = 3;
	char *buf = malloc(sizeof(char *) * n);

	nread = read(STDIN_FILENO, buf, n);
	while (buf[i] != '\n')
	{
		printf("%c\n", buf[i]);
		i++;
	}
	return (0);
}*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_getline - a function that works like getline().
 *@lineptr: a double pointer to the buf containing the text.
 *@n: size of the buffer containing the the text.
 *@stream: file descriptor.
 *
 *Return: the number of bytes read.
 */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int fd , len = 0;
	ssize_t nread;
	size_t num;

	if(*lineptr == NULL)
	{
		*n = 3;
		*lineptr = malloc(sizeof(char *) * ((*n) + 1));
	}
	fd = fileno(stream);
	nread = read(fd, *lineptr, *n);
	/**lineptr[nread] = '\0';*/
	while (*lineptr[len])
	{
		printf("%d:%d\n", len, *lineptr[len]);
		len++;
	}

	/*while(*lineptr[(nread + len) - 1] != '\n')
	{
		printf("%c\n", *lineptr[(nread + len) - 1]);
		*n += 3;
		len += nread;
		*lineptr = realloc(*lineptr, *n);
		nread = read(fd, *lineptr + nread, ((*n) - nread));
	}
	len += nread;*/
	if (nread == 0)
	{
		nread = -1;
		return (nread);
	}
	return (nread);

}

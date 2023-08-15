#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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

        if(*lineptr == NULL)
        {

                (*n) = 120;
                *lineptr = malloc(sizeof(char *) * (*n));
        }
        fd = fileno(stream);
        nread = read(fd, *lineptr, *n);
	if (nread == -1 || nread == 0)
	{
		return (-1);
	}
	(*lineptr)[nread] = '\0';
	
	while (((*lineptr)[(nread + len) - 1]) != '\n')
	{
		*n += 120;
		*lineptr = realloc(*lineptr, (sizeof(char *) * (*n)));
		len += nread;
		nread = read (fd, *lineptr + len, ((*n) - len));
		if (nread == -1 || nread == 0)
		{
			return (-1);
		}
		(*lineptr)[nread + len] = '\0';
	}
        return (nread + len);

}

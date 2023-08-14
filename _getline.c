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
	char *bad;

        if(*lineptr == NULL)
        {

                (*n) = 6;
                *lineptr = malloc(sizeof(char *) * (*n));
        }
        fd = fileno(stream);
        nread = read(fd, *lineptr, *n);
	while (len <= 6)
	{
		printf("%d:%p:%c\n", len , *(lineptr + len),  **(lineptr + 1));
		len++;
	}
	/*(lineptr + (nread - 1)) = '\0';
	while (len)
	{
		 bad = *(lineptr);
		 printf("%d: %s\n", len, bad);
		len--;
	}*/
        if (nread == 0)
        {
                nread = -1;
                return (nread);
        }
        return (nread);

}

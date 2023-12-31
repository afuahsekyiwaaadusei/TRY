#ifndef GET_LINE
#define GET_LINE
#include <stdio.h>
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
int _strlen(char *str);
char **_split(char *str);
char *_strtok(char *str, const char *delim);
extern char **environ;
char *_getenv(const char *name);
int path();
typedef struct node {
	char data[120];
	struct node *next;
} node;
node *list(void);
#endif

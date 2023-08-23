#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program to test written functions.
 *
 *Return: always zero.
 */


void printList(node *head) {
    node *current = head;


    while (current != NULL) {
        printf("%s\n", current->data);
       	current = current->next;
    }

}
int main() {
    node *path_list = list();
    
    printList(path_list);   
    return 0;
}


/*int main(void)
{
	path();
	return (0);
}*/


/*int main(void)
{
	char *value = _getenv("LANG");

	if (value)
		printf("%s\n", value);
	else 
		printf("NULL\n");
	return (0);
}*/


/*int main(void)
{
        char str[] = ";;,";
        char *buf;
        int i = 0;

        buf = _strtok(str, ";,");
	while (buf)
	{
		printf("%s\n", buf);
		buf = _strtok(NULL, " ");
	}
	printf("1%s\n", buf);
	buf = _strtok(NULL, " ");
	printf("after %s\n", buf);
        return (0);
}*/



/**
 * main - program to test split.c function.
 */

/*int main(void)
{
	char str[] = "HELLO, W.ORLD; !";
	char **buf;
	int i = 0;

	buf = _split(str);
	while (buf[i])
	{
		printf("%s\n", buf[i]);
		i++;
	}
	return (0);
}*/





/**
 * main - testing _getline function;
 */

/*int main(void)
{
        char *line;
        size_t n;
        ssize_t nread;

        n = 0;
        line = NULL;
        nread = _getline(&line, &n, stdin);
        printf("My function results %ld: %s: %ld", nread, line, n);
        nread = getline(&line, &n, stdin);
        printf("Original function results %ld: %s : %ld", nread, line, n);
        return (0);
}*/

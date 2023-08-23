#include "main.h"
#include <stdlib.h>

/**
 *_setenv - a function that changes or adds an environment variable (without using setenv.
 *@name: environment name.
 *@valu: environment value.
 *@overwrite: overwritevalue.
 *
 *Return: return zero on success, or -1 on error
 */

int _setenv(const char *name, const char *value, int overwrite)
{
	char *flag = getenv(name);

	if(flag && overwrite)
	{

	}
}

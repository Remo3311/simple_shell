#include "shell.h"

/**
 * sh_print - entry point
 * description: print function
 * @str: a varibal
 */

void sh_print(const char *str)
{

write(STDOUT_FILENO, str, strlen(str));
}

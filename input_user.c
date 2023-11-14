#include "shell.h"

/**
 * read_command - entry point
 * @command: string variable
 * @size: size of the string
 */

void read_command(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
{
if (feof(stdin))
{
sh_print("\n");
exit(EXIT_SUCCESS);
}
else
{
sh_print("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}

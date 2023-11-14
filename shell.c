#include "shell.h"

/**
 * main - entry point
 * line: a function
 * Return: 0 (succes)
 */

int main(void)
{
char command[152];

while (true)
{
shell_promt();
read_command(command, sizeof(command));
exec_com(command);
}
return (0);
}

#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

void shell_promt(void);
void sh_print(const char *str);
void read_command(char *command, size_t size);
void exec_com(const char *command);
int main(void);

#endif

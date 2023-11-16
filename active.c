#include "shell.h"

/**
 * active - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int active(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * isdelim - checks if character is a delimeter
 * @c: the char to check
 * @lim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int isdelim(char c, char *lim)
{
while (*lim)
if (*lim++ == c)
return (1);
return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int a)
{
if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
return (1);
else
return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
int j, sign = 1, flag = 0, outp;
unsigned int resu = 0;

for (j = 0;  s[j] != '\0' && flag != 2; j++)
{
if (s[j] == '-')
sign *= -1;

if (s[j] >= '0' && s[j] <= '9')
{
flag = 1;
resu *= 10;
resu += (s[j] - '0');
}
else if (flag == 1)
flag = 2;
}

if (sign == -1)
outp = -resu;
else
outp = resu;

return (outp);
}

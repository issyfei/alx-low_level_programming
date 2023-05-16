#include <stdlib.h>
#include "main.h"

/**
*argstostr - Concatenates all the arguments of the program.
*
*@ac: The number of arguments.
*
*@av: The array of arguments.
*
*Return: Pointer to the new concatenated string (Success), NULL (Error).
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	len++;
	len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	str[k] = av[i][j];
	k++;
	}
	str[k] = '\n';
	k++;
	}

	return (str);
}

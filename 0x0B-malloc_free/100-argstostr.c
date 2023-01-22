#include "main.h"
#include <stdlib.h>

/**
  * argstostr - Concatenate all the arguments of your program
  * @ac: Argument counter
  * @av: Argument vector
  * Return: Pointer to new string, or NULL if it fails or no parameters
  */
char *argstostr(int ac, char **av)
{
	char *p;
	int strlen = 0, i, j = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (ac--)
	{
		i = 0;
		while (av[ac][i] != '\0')
		{
			i++;
		}
		strlen += i + 1;
	}
	p = malloc(sizeof(char) * (strlen - 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	ac = 0;
	for (i = 0; i < strlen; i++)
	{
		if (av[ac][j] == '\0')
		{
			p[i] = '\n';
			ac++;
			j = 0;
			continue;
		}
		p[i] = av[ac][j++];
	}

	return (p);
}

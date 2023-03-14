#include "main.h"
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i, w, j, k, count, m, wordf;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);

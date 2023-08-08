#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @s: The string to count words in
 *
 * Return: int of Number of words
 */
int count_words(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				len++;
		}
		else if (i == 0)
			len++;
	}
	len++;
	return (len);
}

/**
 * **strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words) or NULL if failure
 */
char **strtow(char *str)
{
	char **w;
	int i, j, k, len, n = 0, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_words(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (len = 0; len < j; len++)
				w[wc][len] = str[i + len];
			w[wc][len] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

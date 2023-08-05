#include "main.h"

/**
 *  *_strpbrk - a function that searches a string for any of a set of bytes
 *
 *  @s: string.
 *  @accept: string to match
 *
 *  Return: pointer to the byte in s that matches one of the bytes in accept,
 *  or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)

{
	int cnt, cnq;
	char *p;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnq = 0;
		while (accept[cnq] != '\0')
		{
			if (accept[cnq] == s[cnt])
			{
				p = &s[cnt];
				return (p);
			}
			cnq++;
		}
		cnt++;
	}
	return (0);
}

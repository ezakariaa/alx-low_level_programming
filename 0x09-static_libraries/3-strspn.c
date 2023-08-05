#include "main.h"

/**
 *  _strspn - a function that locates a character in a string.
 *
 *  @s: string.
 *  @accept: bytes.
 *
 *  Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int cnt, cnq;

	for (cnt = 0; s[cnt] != '\0' ; cnt++)
	{
		for (cnq = 0; accept[cnq] != s[cnt]; cnq++)
		{
			if (accept[cnq] == '\0')
			return (cnt);
		}
	}
	return (cnt);
}

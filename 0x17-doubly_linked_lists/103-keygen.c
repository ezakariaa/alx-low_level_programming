#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrnme: username
 * @leng: length of username
 * Return: the biggest number
 */
int f4(char *usrnme, int leng)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrnme;
	vch = 0;

	while (vch < leng)
	{
		if (ch < usrnme[vch])
			ch = usrnme[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrnme: username
 * @leng: length of username
 * Return: multiplied char
 */
int f5(char *usrnme, int leng)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < leng)
	{
		ch = ch + usrnme[vch] * usrnme[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrnme: username
 * Return: a random char
 */
int f6(char *usrnme)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usrnme)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
* main - Entry point
*
* @argc: arguments count
* @argv: arguments vector
* Return: Always 0
*/
int main(int argc, char **argv)
{
	char keygen[7];
	int leng, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;
	for (leng = 0; argv[1][leng]; leng++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(leng ^ 59) & 63];
	/* ----------- f2 ----------- */
	ch = vch = 0;
	while (vch < leng)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* ----------- f3 ----------- */
	ch = 1;
	vch = 0;
	while (vch < leng)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], leng)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], leng)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}

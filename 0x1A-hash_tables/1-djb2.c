/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @s: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *s)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *s++))
	{
		hash = ((hash << 5) + hash) + x; /* hash * 33 + c */
	}
	return (hash);
}

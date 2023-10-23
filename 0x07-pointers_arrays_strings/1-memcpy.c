/**
 * _memcpy - copies memory area
 * @dest: location to be copy into
 * @src: memory to copy from
 * @n: bytes number to filled
 * Return: dest for success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

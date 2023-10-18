/**
 * _strncpy - cpy one string to another based on actual number given
 * @dest: first string variable
 * @src: second string variable
 * @n: third variable that contain number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, strlen = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		strlen++;
	}
	for (j = 0; j < n && j < strlen; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}

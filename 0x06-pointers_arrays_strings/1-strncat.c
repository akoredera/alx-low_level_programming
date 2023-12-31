/**
 * _strncat - concatenate two strings based actual number given
 * @dest: first string variable
 * @src: second string variable
 * @n: third variable that contain number
 * * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, strlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		strlen++;
	}
	for (j = 0; j < n && j < strlen; j++)
	{
		dest[strlen + j] = src[j];
	}
	return (dest);
}

/**
 * _strcat - concatenate two strings
 * @dest: first string variable
 * @src: second string variable
 * * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, strlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		strlen++;
	}
	for (j = 0; j < strlen; j++)
	{
		dest[strlen + j] = src[j];
	}
	return (dest);
}

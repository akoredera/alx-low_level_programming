/**
 * rot13 - encodes string function
 * @a: string to encode
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (a[i] == alp[j])
			{
				a[i] = num[j];
				break;
			}
		}
	}
	return (a);
}

/**
 * leet - encodes string function
 * @a: string to encode
 * Return: a
 */
char *leet(char *a)
{
	int i, j;
	char alp[] = "aeotl";
	char num[] = "43071";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (a[i] == alp[j] || a[i] == alp[j] - 32)
				a[i] = num[j];
		}
	}
	return (a);
}

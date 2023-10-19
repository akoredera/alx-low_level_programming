char *cap_string(char *a)
{
	int i, j;
	char sepWords[] = " \t\n,;.!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; sepWords[j] != '\0'; j++)
		{
			if (a[i] == sepWords[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = a[i + 1] - 32;
			}
		}
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}

/**
 * swap_int - swap integer value through pointer
 * @a: first pointer variable
 * @b: second pointer variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

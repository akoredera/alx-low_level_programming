/**
 * print_name - print name
 * @name: string
 * @f: function pointer
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

/**
 *print_name - function to print name
 *
 *@name: name to print
 *@f: function pointer that doesnot return anything
 *
 *Return: void(so nth is returned)
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

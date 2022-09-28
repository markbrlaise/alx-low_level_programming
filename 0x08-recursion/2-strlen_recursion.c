/**
 *_strlen_recursion - function to find length of a string
 *
 * @s: pointer to string
 *
 *Return: len, length of the string
 *
 */


int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

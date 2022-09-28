/**
 *_strlen_recursion - function to find length of a string
 *
 * @s: pointer to string
 *
 *return: len, length of the string
 */


int _strlen_recursion(char *s)
{
	int len;
	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}

	return (len);
}

/**
 *
 *_strchr - function to locate a character in a string
 *
 *@s: pointer to string
 *
 *@c: character to locate
 *
 *return: pointer to first occurence or null
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if s[i] == c
			//return pointer to first occurence
			return (s + i);
	}
	//return null if character is absent
	return ('\0');
}

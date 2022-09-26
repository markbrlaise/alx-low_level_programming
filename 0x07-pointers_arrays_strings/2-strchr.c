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

	while (s[i]!='\0')
	{
		if s[i] == c
			//return pointer to first occurence
			return (s + i);
		i++;
	}
	//return null if character is absent
	return ('\0');
}

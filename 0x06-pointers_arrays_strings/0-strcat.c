/**
 *_strcat - dunction that concatenates two strings
 *
 * @dest: pointer to destonation input
 * @src: pointer to source input
 *
 * Return : pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;
	
	//get length of dest array 
	c = 0;
	while dest[c]
		c++;
	
	//iterate through src array value without the null byte
	c2 = 0;
	while src[c2]
	{
		dest[c++] = src[c2];
		++c2;
	}
	dest[c++] = NULL;

	return (dest);
}

/**
 *_memcpy - function that copies memory area
 *
 * @dest: pointer to the destination address of memory
 *
 * @src: pointer to source address of memry to be copied
 *
 * return: pointer to destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

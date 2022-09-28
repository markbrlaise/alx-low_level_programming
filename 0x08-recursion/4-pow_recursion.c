/**
 *_pow_recursion - function to return @x power @y
 *
 *@x: integer x
 *
 *@y: interger y
 *
 *
 *Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	else if (y == 0)
		return (1);
	else
		return (-1);
}

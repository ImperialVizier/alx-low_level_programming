#include "main.h"
int _sqrt_helper(int root, int num);

/**
* _sqrt_recursion - returns the natural square root of n.
* @n: an input integer
* Return: The square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(1, n));
}

/**
* _sqrt_helper - find square root
* @root: square root value
* @num: number whose root to find
* Return: the square root
*/
int _sqrt_helper(int root, int num)
{
	if (root > num)
		return (-1);
	if (root * root == num)
		return (root);
	return (_sqrt_helper(root + 1, num));

}

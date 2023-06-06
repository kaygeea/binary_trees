#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 * @tree: Incoming argument for pointer to root node of BT to be measured.
 *
 * Return: 0 if tree is NULL, otherwise measured size of tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}


/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Incoming argument for pointer to root node of BT to be measured.
 *
 * Return: -1 if tree is NULL, otherwise measured height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (-1); /*-1 because an empty/NULL BT has a height of -1*/
}


/**
 *pow_recursion - recursively return the value of x raised to the power of y.
 *@x: incoming argument for value of base of.
 *@y: incoming argument for value of exponent.
 *
 *Return: -1 if y is negative, otherwise x ^ y.
 */

int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * pow_recursion(x, y - 1));
}


/**
 * binary_tree_is_perfect - check if a binary tree is perfect.
 * @tree: incoming argument for pointer to root node of BT to be checked.
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

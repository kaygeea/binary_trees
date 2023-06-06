#include "binary_trees.h"

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
 * binary_tree_balance - Measure the balance factor (BF) of a binary tree.
 * @tree: Incoming arg for pointer to BT root node, whose BF is to be measured.
 *
 * Return: 0 if tree is NULL, otherwise measured balance factor of tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}

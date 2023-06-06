#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves of a binary tree.
 * @tree: Incoming argument for pointer to root node of BT to be measured.
 *
 * Return: 0 if tree is NULL, otherwise number of leaves counted.
 *
 * INFO:
 *	a. A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

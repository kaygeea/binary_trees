#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full.
 * @tree: Incoming argument for pointer to root node of BT to checked.
 *
 * Return: 1 if the tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

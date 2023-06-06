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

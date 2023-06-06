#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a binary tree.
 * @tree: Incoming argument for pointer to root node of BT to be measured.
 *
 * Return: 0 if tree is NULL, otherwise measured depth of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

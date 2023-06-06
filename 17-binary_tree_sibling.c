#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node.
 * @node: incoming argument for pointer to node whose sibling is to be found.
 *
 * Return: NULL if node, its parent is NULL or it has no siblings,
 *         otherwise pointer to node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

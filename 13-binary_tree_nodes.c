#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child f a binary tree.
 * @tree: Incoming arg for pointer to root node of BT with nodes to be counted.
 *
 * Return: 0 if tree is NULL, otherwise number of nodes counted.
 *
 * INFO:
 *	a. A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

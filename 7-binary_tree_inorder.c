#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using pre-order traversal
 * @tree: Incoming argument for pointer to root node of tree to be traversed.
 * @func: Incoming arguent for a pointer to a function to call for each node.
 *
 * SPEC:
 *	a. If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

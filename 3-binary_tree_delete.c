#include "binary_trees.h"

/**
 * binary_tree_delete - Delete an entire binary tree.
 *
 * @tree: Incoming argument for pointer to the root node of the tree to delete.
 *
 * SPEC:
 *	a. If tree is NULL, do nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

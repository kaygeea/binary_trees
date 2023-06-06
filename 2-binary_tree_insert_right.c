#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as a right-child of
 *                           of another in a binary tree.
 *
 * @parent: Incoming argument for pointer to parent node of the right-child.
 * @value: Incoming argument for value to be inserted into in the new node.
 *
 * Return: NULL if an error occurs,
 *         Otherwise, a pointer to the new node.
 *
 * SPEC:
 *	If parent already has a right-child, the new node must take its place,
 *	and the old right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as a left-child of
 *                           of another in a binary tree.
 *
 * @parent: Incoming argument for pointer to parent node.
 * @value: Incoming argument for value to be inserted into in the new node.
 *
 * Return: NULL if an error occurs,
 *         Otherwise, a pointer to the new node.
 *
 * SPEC:
 *	If parent already has a left-child, the new node must take its place,
 *	and the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}

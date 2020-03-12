#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node->parent == NULL || node == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		sibling = node->parent->right;
	}
	else
	{
		if (node->parent->left == NULL)
			return (NULL);
		sibling = node->parent->left;
	}
	return (sibling);
}

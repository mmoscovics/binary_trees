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
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}

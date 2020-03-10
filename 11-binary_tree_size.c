#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the node, or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	lh = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);
	return (lh + rh + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the treeto count the leaves
 *
 * Return: number of leaves, or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lc = 0, rc = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lc = binary_tree_leaves(tree->left);
	rc = binary_tree_leaves(tree->right);
	return (lc + rc);
}
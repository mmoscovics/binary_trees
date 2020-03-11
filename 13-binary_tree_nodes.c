#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 *
 * @tree: pointer to the root of the tree to count nodes
 *
 * Return: number of nodes with at least 1 child, or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lc = 0, rc = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left || tree->right)
	{
		lc = binary_tree_nodes(tree->left);
		rc = binary_tree_nodes(tree->right);
		return (1 + lc + rc);
	}
	else
		return (0);
}

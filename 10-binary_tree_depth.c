#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the node, or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}
	return (0);
}

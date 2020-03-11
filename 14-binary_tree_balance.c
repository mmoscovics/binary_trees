#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor, or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rh = binary_tree_height(tree->right) + 1;
	return (lh - rh);
}

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the node, or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		lh = binary_tree_height(tree->left);
		rh = binary_tree_height(tree->right);
		if (lh > rh)
			return (lh + 1);
		return (rh + 1);
	}
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = get_depth(tree);
	return (is_perfect(tree, depth, 0));
}

/**
 * get_depth - gets depth of leftmost leaf
 *
 * @tree: pointer to a node in the tree
 *
 * Return: depth of leaves
 */

int get_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - tests a binary tree is perfect or not
 *
 * @tree: pointer to the root node in the tree
 * @depth: depth of left side of tree
 * @level: depth of all leaves
 *
 * Return: 1 if perfect, otherwise 0
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

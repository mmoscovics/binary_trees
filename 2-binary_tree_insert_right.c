#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of node
 *
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure / parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);
    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);
    new->n = value;
    new->parent = parent;
    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }
    parent->right = new;
    return (new);
}
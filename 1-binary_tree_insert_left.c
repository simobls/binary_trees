#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return (NULL);

    binary_tree_t *new = binary_tree_node(parent, value);

    if (!new)
        return (NULL);
    if (parent->left)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }

    parent->left = new;
    return (new);
}
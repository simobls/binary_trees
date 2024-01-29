#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (!parent)
        return (NULL);

    binary_tree_t *new = binary_tree_node(parent, value);

    if (!new)
        return (NULL);
    if (parent->right)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }

    parent->right = new;
    return (new);
}
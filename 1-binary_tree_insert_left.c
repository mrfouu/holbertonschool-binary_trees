<<<<<<< HEAD
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud comme enfant droit d'un autre nœud
 * @parent: Pointeur vers le nœud parent où insérer l'enfant droit
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nœud créé, ou NULL en cas d'échec ou si parent est NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = parent->right;

    if (parent->right != NULL)
        parent->right->parent = new_node;

    parent->right = new_node;

    return (new_node);
}

=======
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
>>>>>>> 329c646eb8423de4c0c6ac03301b5ec7fc0cb9cf

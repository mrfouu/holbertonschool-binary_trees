#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - create binary tree node.
 *@parent: parent node.
 *@value: value of new node.
 *Return: new node or NULL.
 */

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

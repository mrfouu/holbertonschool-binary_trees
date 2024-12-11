#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 *         If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
<<<<<<< HEAD
		return 0;

	if (node->parent == NULL)
		return 1;

	return 0;
=======
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
>>>>>>> 329c646eb8423de4c0c6ac03301b5ec7fc0cb9cf
}

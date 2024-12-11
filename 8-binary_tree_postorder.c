#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: null
 */
=======
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */

>>>>>>> 329c646eb8423de4c0c6ac03301b5ec7fc0cb9cf
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
<<<<<<< HEAD

=======
>>>>>>> 329c646eb8423de4c0c6ac03301b5ec7fc0cb9cf

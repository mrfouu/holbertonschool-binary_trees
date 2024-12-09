#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

typedef struct  binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *right;
	struct binary_tree_s *left;

} binary_tree_t;


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 * @node: Node to check
 * Return: 0 if is not a root 1 if it is
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*If node is null return 0*/
	if (node == NULL)
		return (0);
	/*Check if node has no parent*/
	if (node->parent == NULL)
		/*if parent is null, node is a ROOT*/
		return (1);
	/*Node is not a root*/
	return (0);
}


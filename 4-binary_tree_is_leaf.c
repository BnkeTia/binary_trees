#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is a leaf, that means that the node
 * does not have any child neither left nor right
 * @node: node to study
 * Return: 1 if it is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*If node is NULL return 0*/
	if (node == NULL)
		return (0);
	/*Check if the node has no children*/
	if (node->left == NULL && node->right == NULL)
		/*Return 1 if node is a leaf*/
		return (1);
	/*Node is not a leaf*/
	return (0);
}


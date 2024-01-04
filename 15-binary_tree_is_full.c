#include "binary_trees.h"


/**
* binary_tree_is_full - A function that checks if a binary tree is full
* @tree: A pointer to the root node of the target tree
* Return: 1 if the tree is full, 0 if otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* consider tree to be full if its NULL */
	if (tree == NULL)
		return (1);
	/* if both children are null, it is a leaf */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/*If both children exist, recursively check their subtrees */
	if (tree->left && tree->right)
	{
		return ((binary_tree_is_full(tree->left) &&
						binary_tree_is_full(tree->right)));
	}
	/* If only one child exists, the tree is not ful */
	return (0);
}

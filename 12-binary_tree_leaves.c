#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	/* If both left and right child are NULL, current node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


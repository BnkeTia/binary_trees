#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Variable to store the size */
	size_t size = 0;

	/* Check if the tree is not NULL */
	if (tree != NULL)
	{
		/* Increment size for the current node */
		size += 1;

		/* Recursively calculate size of left subtree and add to size */
		size += binary_tree_size(tree->left);

		/* Recursively calculate size of right subtree and add to size */
		size += binary_tree_size(tree->right);
	}

	/* Return the calculated size of the tree */
	return (size);
}


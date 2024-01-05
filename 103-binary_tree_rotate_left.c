#include "binary_trees.h"

/**
 * binary_tree_rotate_left - A function that performs a left rotation on
 * a binary tree
 * @tree: The root node of the binary tree
 * Return: newN, the newly created node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	/* initializing a new node newN */
	binary_tree_t *newN;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	newN = tree->right;
	tree->right = newN->left;

	if (newN->left != NULL)
		newN->left->parent = tree;

	newN->left = tree;
	newN->parent = tree->parent;
	tree->parent = newN;
	return (newN);
}

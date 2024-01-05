#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function that performs a right rotation
 * on a binary tree
 * @tree: The root node of the binary tree
 * Return: newN, the newly created node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	/* initialize new node, newN */
	binary_tree_t *newN;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	newN = tree->left;
	tree->left = newN->right;

	if (newN->right != NULL)
		newN->right->parent = tree;

	newN->right = tree;
	newN->parent = tree->parent;
	tree->parent = newN;
	return (newN);
}

#include "binary_trees.h"
/**
 * binary_tree_postorder - print elements of tree using post-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*If true or function is NULL, do nothing*/
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		/*Traverse the left sub tree recursively*/
		binary_tree_postorder(tree->left, func);
		/*Traverse the right sub tree recursively*/
		binary_tree_postorder(tree->right, func);
	}
	/*call the function for the current node*/
	func(tree->n);
}


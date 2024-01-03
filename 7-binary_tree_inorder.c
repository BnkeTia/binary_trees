#include "binary_trees.h"
/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*If tree or function is NULL return nothing*/
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		/*Traverse the left sub tree recursively*/
		binary_tree_inorder(tree->left, func);

		/*Call the function for the current node*/
		func(tree->n);

		/*Traverse the right sub tree recursively*/
		binary_tree_inorder(tree->right, func);
	}
}


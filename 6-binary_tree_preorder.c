#include "binary_trees.h"
/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*If tree or function is NULL, do nothing*/
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		/*Call the function for the current node*/
		func(tree->n);
		/*Traverse the left sub tree recursively*/
		binary_tree_preorder(tree->left, func);
		/*Traverse the right sub tree recursively */
		binary_tree_preorder(tree->right, func);
	}
}


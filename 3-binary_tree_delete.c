#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree using recursion it free the node
 * when the node left and right are NULL
 * @tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*If tree is NULL ,do nothing*/
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			/*Delete left subtree recurvesively*/
			binary_tree_delete(tree->left);

			/*Delete right subtree recurvesively*/
			binary_tree_delete(tree->right);
		}
		/*Free memory for current tree*/
		free(tree);
	}

}


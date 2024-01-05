#include "binary_trees.h"

/**
 * bst_insert - A function that inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 * Return: newN, New node or NULL otherwise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	/* Initialize trav pointer variable to traverse the tree */
	bst_t *trav = NULL, *temp = NULL, *newN = NULL;

	if (!tree)
		return (NULL);

	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	trav = *tree;
	while (trav)
	{
		temp = trav;
		if (value < trav->n)
			trav = trav->left;

		else if (value > trav->n)
			trav = trav->right;

		else if (value == trav->n)
			return (NULL);
	}

	newN = binary_tree_node(NULL, value);
	if (temp == NULL)
		temp = newN;

	else if (value < temp->n)
	{
		temp->left = newN;
		newN->parent = temp;
	}
	else
	{
		temp->right = newN;
		newN->parent = temp;
	}
	return (newN);
}

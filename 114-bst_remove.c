#include "binary_trees.h"


/**
 * bst_remove - A function that removes a node from a Binary Search tree
 * @root: The root of a binary tree
 * @value: The node with value to remove
 * Return: Tree changed
 */
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);

	if (value < root->n)
		bst_remove(root->left, value);

	else if (value > root->n)
		bst_remove(root->right, value);

	else if (value == root->n)
	{
		type = remove_children(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);

	return (root);
}

/**
 *remove_children - Function that removes a node depending of its children
 *@root: The node to remove
 *Return: value, 0 otherwise
 */
int remove_children(bst_t *root)
{
	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;

		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;

			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;

			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
		return (children(root));
}

/**
 * children - A function that finds and replace nodes with their successor
 * @root: node tat has two children
 * Return: the value found
 */
int children(bst_t *root)
{
	int new_value = 0;

	new_value = next_in_order(root->right);
	root->n = new_value;
	return (new_value);
}

/**
 * next_in_order - A function that finds and replace a node with next its
 * successor
 * @node: The targeted tree 
 * Return: min node value of tree
 */
int next_in_order(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = next_in_order(node->left);
		if (left == 0)
			return (node->n);

		return (left);
	}
}

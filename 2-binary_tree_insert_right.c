#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Check if the parent node is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*Create a new node with the given value*/
	new_node = binary_tree_node(parent, value);

	/*Check if new node is NULL*/
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*If the parent already has right child*/
	if (parent->right != NULL)
	{
		/*Set new node's right child as the curr right child of parent*/
		new_node->right = parent->right;
		/*Set the parent of the curr right child to new node*/
		parent->right->parent = new_node;
	}
	/*Set the new node as the right child of parent node*/
	parent->right = new_node;
	/*Return pointer to new node*/
	return (new_node);
}


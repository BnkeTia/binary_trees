#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/*Check if the parent node is NULL,if it is, return NULL*/
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

	/*If the parent already has a left child,has a value*/
	if (parent->left != NULL)
	{
		/*Set new node's left child as the current left child of parent*/
		new_node->left = parent->left;

		/*Set the parent of the current left child to new node*/
		parent->left->parent = new_node;
	}
	/*Set the new node as the left child of parent node*/
	parent->left = new_node;
	/*Return pointer to new node*/
	return (new_node);
}


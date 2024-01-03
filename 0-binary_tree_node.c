#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

/*Function to create new binary tree node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*declare name of variable new node*/
	binary_tree_t *new_node;

	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(binary_tree_t));

	/*Check if memory allocation was successful*/
	if (new_node == NULL)
	{
		/*Return null if memory allocation of newnode fails*/
		return (NULL);
	}
	/*Set the value of the new node*/
	new_node->n = value;
	/*Assign the parent node for new node*/
	new_node->parent = parent;
	/*Initialize left and right child pointers to Null*/
	new_node->left = NULL;
	new_node->right = NULL;
	/*Return a pointer to the newly created node*/
	return (new_node);
}

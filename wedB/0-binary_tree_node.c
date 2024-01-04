#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*declare name of variable new node*/

	new_node = malloc(sizeof(binary_tree_t)); /*Allocate memory for the new node*/

	if (new_node == NULL) /*Check if memory allocation was successful*/
	{
		return (NULL); /*Return null if memory allocation of new node fails*/
	}

	new_node->n = value; /*Set the value of the new node*/
	new_node->parent = parent; /*Assign the parent node for new node*/
	new_node->left = NULL; /*Initialize left and right child pointers to Null*/
	new_node->right = NULL;

	return (new_node); /*Return a pointer to the newly created node*/
	/* Free dynamically allocated memory*/
}


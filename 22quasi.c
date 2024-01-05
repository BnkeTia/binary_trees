#include "binary_trees.h"

/**
 * binary_tree_is_complete - A function that checks if a binary tree
 * is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Create a queue for level order traversal */
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
	size_t front = 0, rear = 0;
	int flag = 0; /* Flag to mark non-full nodes */

	if (queue == NULL)
		return (0);

	binary_tree_t *current;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		current = queue[front++];

		/* If a non-full node is found */
		if (current->left == NULL && current->right != NULL)
			return (0);

		if (flag && (current->left != NULL || current->right != NULL))
			return (0);

		/* If left child is present, enqueue it */
		if (current->left != NULL)
			queue[rear++] = current->left;
		else /* Set flag for next iteration */
			flag = 1;

		if (current->right != NULL)
			queue[rear++] = current->right;
		else /* Set flag for next iteration */
			flag = 1;
	}
	free(queue);
	return (1);
}

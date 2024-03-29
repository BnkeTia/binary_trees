#ifndef _BISKIT_BINARY_TREES_H
#define _BISKIT_BINARY_TREES_H

/* Neccessary standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
/* Type definition of BST, AVL & MBH types */
typedef struct binary_tree_s bst_t;
/*AVL Tree*/
typedef struct binary_tree_s avl_t;
/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/* Function prototypes of mandatory tasks */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Function Prototype of print function*/
void binary_tree_print(const binary_tree_t *tree);

/*Function prototypes of helper functions */
int exponent(int x, int y);
size_t binary_tree_height(const binary_tree_t *tree);
void binary_tree_level(const binary_tree_t *tree, size_t i,
		void (*func)(int));
int binary_tree_lev(const binary_tree_t *tree, size_t index, size_t size);
int bst(const binary_tree_t *tree, int min, int max);
int remove_children(bst_t *root);
int children(bst_t *root);
int next_in_order(bst_t *node);

/* Function prototypes of Advanced tasks */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);

	/* Function prototypes of Binary Serach Tree */
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);

	/* Function prototype of avl */
int binary_tree_is_avl(const binary_tree_t *tree);


#endif /*BISKIT_BINARY_TREE_H*/

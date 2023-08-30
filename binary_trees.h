#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Data structures */

/**
 * struct binary_tree_s - Binary tree node
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
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct levelorder_queue_s - Level order traversal queue.
 * @node: A node of a binary tree.
 * @next: The next node to traverse to in the binary tree.
 */
typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;

/* Printing helper function */
void binary_tree_print(const binary_tree_t *);

/* Task function prototypes */

/* Creates a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Inserts a left child node with a given value */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Inserts a right child node with a given value */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Deletes an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* Checks if a node is a leaf node */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Checks if a node is the root node */
int binary_tree_is_root(const binary_tree_t *node);

/* Traverses the binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Traverses the binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Traverses the binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Gets the height of the binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Gets the depth (level) of a given node in the tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Gets the total number of nodes in the binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Counts the number of leaf nodes in the binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Counts the number of non-leaf (internal) nodes in the binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Calculates the balance factor of the binary tree */
int binary_tree_balance(const binary_tree_t *tree);

/* Checks if the binary tree is a full binary tree */
int binary_tree_is_full(const binary_tree_t *tree);

/* Checks if the binary tree is a perfect binary tree */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Gets the sibling of a given node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Gets the uncle of a given node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Finds the lowest common ancestor of two nodes */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);

/* Traverses the binary tree using level-order traversal */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Checks if the binary tree is a complete binary tree */
int binary_tree_is_complete(const binary_tree_t *tree);

/* Rotates the binary tree to the left */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Rotates the binary tree to the right */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Checks if the binary tree is a valid Binary Search Tree (BST) */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Inserts a value into a Binary Search Tree (BST) */
bst_t *bst_insert(bst_t **tree, int value);

/* Converts an array to a Binary Search Tree (BST) */
bst_t *array_to_bst(int *array, size_t size);

/* Searches for a value in a Binary Search Tree (BST) */
bst_t *bst_search(const bst_t *tree, int value);

/* Removes a node with a given value from the Binary Search Tree (BST) */
bst_t *bst_remove(bst_t *root, int value);

/* Checks if the binary tree is a valid AVL tree */
int binary_tree_is_avl(const binary_tree_t *tree);

/* Inserts a value into an AVL tree */
avl_t *avl_insert(avl_t **tree, int value);

/* Converts an array to an AVL tree */
avl_t *array_to_avl(int *array, size_t size);

/* Removes a node with a given value from the AVL tree */
avl_t *avl_remove(avl_t *root, int value);

/* Converts a sorted array to an AVL tree */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* Checks if the binary tree is a valid Heap */
int binary_tree_is_heap(const binary_tree_t *tree);

/* Inserts a value into a Heap */
heap_t *heap_insert(heap_t **root, int value);

/* Converts an array to a Heap */
heap_t *array_to_heap(int *array, size_t size);

/* Extracts the root value from the Heap (Max Heap or Min Heap) */
int heap_extract(heap_t **root);

/* Converts a Heap to a sorted array */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif /* BINARY_TREES_H */

#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf (no children), return 1. */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count the leaves in the left and right subtrees. */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	/* The number of leaves in the tree is the */
	/* sum of the leaves in the subtrees. */
	return (left_leaves + right_leaves);
}

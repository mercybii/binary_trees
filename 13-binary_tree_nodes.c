#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least
 * one child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child in the tree,
 *         or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has at least one child, return 1 + */
	/* the sum of the nodes in subtrees. */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	/* If the node has no children, return 0. */
	return (0);
}

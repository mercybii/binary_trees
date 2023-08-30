#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has no parent, its depth is 0. */
	if (tree->parent == NULL)
		return (0);

	/* Recursively calculate the depth from the parent node. */
	return (1 + binary_tree_depth(tree->parent));
}

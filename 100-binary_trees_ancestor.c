#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common
 * ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node,
 * Or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor1, *ancestor2;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	ancestor1 = (binary_tree_t *)first;
	while (ancestor1)
	{
		ancestor2 = (binary_tree_t *)second;
		while (ancestor2)
		{
			if (ancestor1 == ancestor2)
				return (ancestor1);

			ancestor2 = ancestor2->parent;
		}
		ancestor1 = ancestor1->parent;
	}

	return (NULL);
}

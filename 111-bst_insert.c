#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST
 * to insert the value
 * @value: Value to store in the node to be inserted
 *
 * Description: If the address stored in tree
 * is NULL, the created node must
 * become the root node. If the value is already present
 * in the tree, it must
 * be ignored.
 *
 * Return: A pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}
		tmp = *tree;
		while (tmp)
		{
			if (tmp->n == value)
				break;
			if (tmp->n > value)
			{
				if (!tmp->left)
				{
					tmp->left = binary_tree_node(tmp, value);
					return (tmp->left);
				}
				tmp = tmp->left;
			}
			else if (tmp->n < value)
			{
				if (!tmp->right)
				{
					tmp->right = binary_tree_node(tmp, value);
					return (tmp->right);
				}
				tmp = tmp->right;
			}
		}
	}
	return (NULL);
}

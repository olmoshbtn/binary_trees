#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the balance factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL return 0, else return numbers of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (0);
		}
		return (binary_tree_nodes(tree->left)
			+ 1 + binary_tree_nodes(tree->right));
	}
	return (0);
}

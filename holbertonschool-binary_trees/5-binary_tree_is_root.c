#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to a node to check
 *
 * Return: 1 if node is a root, and 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
	{
		return (0);
	}
	return (1);
}

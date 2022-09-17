#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node of the binary tree
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	{
		return (counter);
	}
	while (tree->parent != NULL)
	{
		counter += 1;
		tree = tree->parent;
	}
	return (counter);
}

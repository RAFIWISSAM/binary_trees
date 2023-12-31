#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of tree or 0
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size + 1);
}

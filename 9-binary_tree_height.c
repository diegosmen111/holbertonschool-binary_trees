#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a tree
 *@tree: Pointer to the root
 *
 *Return: Height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree != NULL)
	{
		while(tree->left != NULL || tree->right != NULL)
		{
			height++;

			if (tree->left != NULL)
			{
				tree = tree->left;
				continue;
			}
			else
			{
				tree = tree->right;
				continue;
			}
		}
		return (height);
	}
	return (0);
}

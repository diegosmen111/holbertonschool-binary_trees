#include "binary_trees.h"

/**
 * binary_tree_preorder - Walk a binary tree with the pre-order method
 *@tree: Pointer to the root node of the tree
 *@func: Pointer to a function to call for each node
 *
 *Return: NULL or node value
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}


/**
 * traverse_binary_tree_preorder - Funcion
 *@tree: Tree
 *
 *Return: Void
 */

void traverse_binary_tree_preorder(const binary_tree_t *tree)
{
	binary_tree_preorder(tree, &print_num);
}

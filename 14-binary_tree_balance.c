#include "binary_trees.h"

/**
* binary_tree_height - Helper function to measure the height of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Description: This function uses a "node-based" height, where a
* single leaf node has a height of 1, and a NULL node has a height of 0.
*
* Return: The height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h = 0;
size_t right_h = 0;

if (tree == NULL)
return (0);


left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);


if (left_h > right_h)
return (1 + left_h);
else
return (1 + right_h);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Return: The balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

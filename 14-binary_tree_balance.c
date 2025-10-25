#include "binary_trees.h"

/**
* binary_tree_height - Helper function to find the height of a node
* @tree: Pointer to the node to measure
*
* Return: The height of the node, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h;
size_t right_h;

if (tree == NULL)
return (0);

left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);

if (left_h > right_h)
return (left_h);
else
return (right_h);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree
*
* Return: The balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

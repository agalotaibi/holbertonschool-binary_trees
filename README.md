# 🌳 Binary Trees in C — Learning Low-Level Programming

This repository documents our journey into **binary trees** as part of learning low-level programming in C.  
Each file implements a fundamental binary tree operation such as creating nodes, traversals, measuring size/height, checking properties, and navigating relatives like siblings and uncles.

The goal is to **understand how data structures work in memory** and improve thinking in terms of pointers and relationships between nodes.

---

## 📚 What we Learned

- What binary trees are and how nodes are linked
- How to dynamically allocate and free memory for tree structures
- Different tree traversal algorithms (preorder, inorder, postorder)
- How height, depth, balance, and size are measured
- How to identify tree properties (full, perfect)
- How to determine relationships: root ↔ leaf, sibling, uncle

This project leveled up our understanding in C and pointer logic 🧠✨

---

## 📂 File Structure
binary_trees.h                → Struct definition + function prototypes

0-binary_tree_node.c          → Create a node

1-binary_tree_insert_left.c   → Insert node as left child

2-binary_tree_insert_right.c  → Insert node as right child

3-binary_tree_delete.c        → Delete entire binary tree

4-binary_tree_is_leaf.c       → Check if node is a leaf

5-binary_tree_is_root.c       → Check if node is root

6-binary_tree_preorder.c      → Preorder traversal

7-binary_tree_inorder.c       → Inorder traversal

8-binary_tree_postorder.c     → Postorder traversal

9-binary_tree_height.c        → Measure tree height

10-binary_tree_depth.c        → Measure node depth

11-binary_tree_size.c         → Count nodes in tree

12-binary_tree_leaves.c       → Count leaf nodes

13-binary_tree_nodes.c        → Count nodes with at least one child

14-binary_tree_balance.c      → Balance factor of tree

15-binary_tree_is_full.c      → Check if tree is full

16-binary_tree_is_perfect.c   → Check if tree is perfect

17-binary_tree_sibling.c      → Find sibling of node

18-binary_tree_uncle.c        → Find uncle of node


```c
🔹 0 — Creates a new node with no children.

allocate new_node
if fail → return NULL
new_node.value = value
new_node.parent = parent
new_node.left = NULL
new_node.right = NULL
return new_node


🔹 1 — Insert Left
if parent is NULL → return NULL
new = create_node(parent, value)
if parent.left exists:
    new.left = parent.left
    parent.left.parent = new
parent.left = new
return new

🔹 2 — Insert Right
if parent is NULL → return NULL
new = create_node(parent, value)
if parent.right exists:
    new.right = parent.right
    parent.right.parent = new
parent.right = new
return new

🔹 3 — Delete Tree
delete(left)
delete(right)
free(node)

🔹 4 — Is Leaf?
if node exists AND left & right are NULL → return 1
else → return 0

🔹 5 — Is Root?
if node exists AND parent is NULL → return 1
else → return 0

🔹 6 — Preorder Traversal
if tree and func:
    func(value)
    preorder(left)
    preorder(right)

🔹 7 — Inorder Traversal
inorder(left)
func(value)
inorder(right)


🔹 8 — Postorder Traversal
postorder(left)
postorder(right)
func(value)

🔹 9 — Height
if tree is NULL → return 0
return 1 + max(height(left), height(right))

🔹 10 — Depth
if tree is NULL or parent is NULL → return 0
return 1 + depth(tree.parent)

🔹 11 — Size
if NULL → 0
return 1 + size(left) + size(right)

🔹 12 — Count Leaves
if NULL → 0
if leaf → 1
else → leaves(left) + leaves(right)

🔹 13 — Count Nodes with Children
if NULL → 0
if node has 1+ children:
    return 1 + nodes(left) + nodes(right)
else:
    return nodes(left) + nodes(right)


🔹 14 — Balance Factor
return height(left) - height(right)

🔹 15 — Full Tree Check
if NULL → 0
if leaf → 1
if both children exist:
    return full(left) AND full(right)
else:
    return 0

🔹 16 — Perfect Tree Check
if heights equal AND left & right subtrees perfect → perfect
else → not perfect

🔹 17 — Sibling
if node or parent NULL → return NULL
if node is left child → return parent.right
if node is right child → return parent.left

🔹 18 — Uncle
if node or parent or grandparent NULL → return NULL
return sibling(parent)

`````

# 🔧 How to Compile
gcc -Wall -Wextra -Werror -pedantic *.c -o binary_trees
### Run with:
./binary_trees

# 🧪 Simple Example Tree (for understanding traversal)

`````

        98
      /    \
    12      402
   /  \
  6    14

🌀 Preorder → 98 12 6 14 402
🔁 Inorder  → 6 12 14 98 402
⏬ Postorder → 6 14 12 402 98

`````





# 👩🏻‍💻 Authors

Amaal AlOtaibi

Norah Alnujidi

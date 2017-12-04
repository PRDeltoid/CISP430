# Trees

Previously, we have covered Linear Data Structures. (ie arrays, linked lists, stack, queue)
Trees are Non-Linear Data Structures. These also include Graphs and more

### Definition
A tree is a finite set of one or more nodes such that:
    - There is a "root" node
    - The remaining nodes are paritioned into 0 or more sets T1,...,Tn where each of these sets is also a tree
    -We call T1,...,Tn "subtrees" of the root

### Terminology:
**Node:** An element in the tree that contains data. Can contain a parent node and multiple child nodes
**Degree:** The number of subtrees of a specific node. ie how many child nodes it contains 
**Root:** is the "top" of the tree and represents the starting node used when traversing. This is a Parent Node of all other nodes in the tree, and has no Parent Node itself
**Leaf:** A node which has no Child Nodes. This is the "bottom" of the tree, and ALWAYS has a degree of 0.
**Siblings:** Child Nodes of the same Parent Node are considered "siblings"
**Ancestors:**: All the nodes traversed to reach a certain node on the tree
**Level/Depth:** The depth in the tree you have traversed. The root is considered level "1". Traversing to a child of the root puts you at level "2", and so on

### Types of Trees
- Complete: Every level except for the final level has all child nodes filled.
- Perfect: The final level is completely balanced (all previous parents have the same number of nodes)
- Full: A tree where every node has either 0 or 2 children


## Binary Trees
A tree where each node has, at max, only two children (subtrees).
These two children are named "left" and "right"
Used for effecient search (O(logn) instead of O(n) traversal time) and insertion

The maximum number of nodes on level i of a binary tree is 2^(i-1), i >= 1
The maximum number of nodes in a binary tree at depth k is 2^k-1, k >= 1

Can be represented with an array or linked list.

Given tree:      
      a
     /\
    b  e
   /\  /\
  c d    f
Sequential (2D array) representation is 
[a, b, e, c, d, null, f]

Using an array of structures or sub-arrays
Node  | Left  | Right
A       B       E
B       C       D
C
D
E               F
F

Linked List Node Structure
```
struct node *tree_pointer;
struct node {
    int data;
    tree_pointer left_child, right_child;
};
```

### Tree Traversal
Let L, V, and R stand for Moving Left, Visiting Node, and Moving Right

Three main methods for traversing a tree:
- In Order: LVR
- Post Order: LRV
- Pre Order: VLR

#### Procedure:
In Order: 
1. Traverse leftwards on the tree until you reach a leaf with no children (L)
2. Place this child in our traversal list. [L]
3. Place the parent of this node (V) to our list [L, V]
4. Place the right-side child (R) on the traversal list. [L, V, R]
5. Traverse to the parent node of our parent node. 
    If the node is a root, place it on our traversal list.
    If the node is not a root, continue left

## Expression Tree
A special type of binary tree used to represent and evaluate arithmatic expression

To find the postfix or prefix version of an infix expression using trees, simply create a tree for the expression,
and traverse it using Post Order or Pre Order methods. The output is our post/prefix expression.

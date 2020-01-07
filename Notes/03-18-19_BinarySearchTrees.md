# Binary Search Trees #
Binary search trees are a special type of tree that has a special organization pattern using a couple of rules.

1. Every entry in n's left subtree is less than or equal to the entry in node n.
2. Every entry in n's right subtree is greater than (or equal to) the entry in node n.

* This class will follow these rules for all binary search trees and will not deviate from this. Assume that equal nodes will be put in the left subtree.


## Benefits of Tree Organization ##
Contents of the binary search tree are sorted when processed using an In-Order traversal. In-Order traversal goes from left to root to right.

    typedef int DATA_TYPE; // Type of node's data

    class BinarySearchTree{
    private:
      DATA_TYPE data;
      BSTreeNode* leftPtr;
      BSTreeNode* rightPtr;

    }*TreePtr;

    TreePtr rootPtr; // Root of BST

    void InitBSTree(){
      rootPtr = NULL;
    }

    void DeleteBST(TreePtr& treePtr);
    void DeleteNode(TreePtr& , DATA_TYPE theItem);
    void DeleteNodeItem(TreePtr& DATA_TYPE& theItem);

    // Some other items

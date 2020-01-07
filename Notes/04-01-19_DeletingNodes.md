# Deleting Nodes #

_**Simple Version:**_
if the item is in the tree, remove it

_**Complex Version:**_
1. N is a leaf (easy)
2. N has only one child (easy)
3. N has two children (hard)

## Leaf ##
Just delete it and be done. Set the pointer from its parent to NULL, and release (delete) the dynamically allocated memory.

## One Child ##
Promote the child. Set the pointer of the parent to the child of the node we are deleting, then set the pointer of our node to NULL and remove.

*Must account for left and right nodes.*

## Two Children ##
1. Find a node *M* that is easier to remove from the tree than *N*.
2. Copy the info that is in *M* to *N* (deleting original *N*).
3. Remove *M* from the tree.

Note that *M* can't be just any node, the BST properties must be preserved.

    // Pseudo Code
    DeleteItem(TreePtr, key)
      if(key is in node N)
        DeleteNodeItem(N)
      else
        do nothing / error message

    DeleteNodeItem(TreePtr N)
      if(N is a leaf)
        remove N from the tree
      else if(N has only one child (C))
        if(N is the left child of its parent P)
          make C the left child of P
        else
          make C the right child of P
      else // N has two children
        find M, the node that is N's inorder successor
        copy info from M into N
        remove M from the tree

*The Inorder Successor can be found by going right, and then going down until we find the least node on the right.*

    void DeleteNode(TreePtr& t, DATA_TYPE val){
      if(t==NULL){
        return;
      }else if(val == t->data){
        DeleteNodeItem(t);
      }else if(val < t->data){
        DeleteNode(t->left, val);
      }else{
        DeleteNode(t->right, val);
      }
    }

    void DeleteNodeItem(TreePtr& t){
      TreePtr delPtr;

      if(IsLeaf(t)){ // No Children
        delete t;
        t = NULL;
      }else if(t->left == NULL){ // One Child
        delPtr = t;
        t = t->right;
        delPtr->right = NULL;
        delete delPtr;
      }else if(t->right == NULL){ // One Child
        delPtr = t;
        t = t->left;
        delPtr->left = NULL;
        delete delPtr;
      }else{ // Two Children
        DATA_TYPE replacementItem;
        ProcessLeftMost(t->right, replacementItem);
        t->data = replacementItem;
      }
    }

    void ProcessLeftMost(TreePtr& t, DATA_TYPE theItem){
      if(t->left != NULL){
        ProcessLeftMost(t->left, theItem);
      }else{
        theItem = t->data;

        TreePtr delPtr = t;
        t = t->right;
        delPtr->right = NULL;
        delete delPtr;
      }
    }

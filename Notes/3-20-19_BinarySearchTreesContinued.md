# Binary Search Trees Cont'd #

1. Every entry in n's left subtree is less than or equal to the entry in node n.
2. Every entry in n's right subtree is greater than (or equal to) the entry in node n.

# Does Order of Insertion Matter? #
Yes, placing the items in order in the tree means that searching for an element in the tree is close to log(N). This is because the tree is balanced so searching for an element in the tree guarantees that we only have to search one half of the tree and the longest path we will have to traverse is log(N).


## Adding Nodes ##
Using recursive adding is more likely to blow the stack if the tree is grossly imbalanced.

      BinarySearchTree::AddNodeR(TreePtr &t, DATA_TYPE newData){
        if(t == NULL){
          TreePtr newPtr = new BSTreeNode;

          newPtr->data = newData;
          newPtr->leftPtr = NULL;
          newPtr->right = NULL;

          t = newPtr;

        }else if(newData <= t->data){
          AddNodeR(t->leftPtr, newData);

        }else{
          AddNodeR(t->rightPtr, newData);
        }
      }

      // Other Method

      BinarySearchTree::AddNodeR(TreePtr &t, DATA_TYPE newData){
        if(t != NULL){
          if(newData <= t->data){AddNodeR(t->leftPtr, newData);

          }else if(newData <= t->data){
            AddNodeR(t->rightPtr, newData);
          }

        }else{
          TreePtr newPtr = new BSTreeNode;

          newPtr->data = newData;
          newPtr->leftPtr = NULL;
          newPtr->right = NULL;

          t = newPtr;

        }
      }

## Searching for Nodes ##

    void BinarySearchTree::SearchNode(DATA_TYPE searchKey){
      TreePtr srchPtr = NULL;

      srchPtr = SearchNodeInBST(rootPtr, searchKey);

      if(searchPtr != NULL){
        cout << "\n Node: " << srchPtr->data << " found in the BST" << endl;

      }else{
        cout << "\n Node: " << searchKey << " not found" << endl;
      }
    }

    // Private Function
    // Must have return type BinarySearchTree::TreePtr because the struct is inside our BST class.
    // We can change this by moving the struct and making it a global datatype

    BinarySearchTree::TreePtr BinarySearchTree::SearchNodeInBST(TreePtr treePtr, DATA_TYPE key){
      if(treePtr != NULL){
        if(key == treePtr->data){
          return treePtr;
        }else if(key < treePtr->data){
          SearchNodeInBST(treePtr->leftPtr, key);
        }else{
          SearchNodeInBST(treePtr->rightPtr, key);
        }
      }else{return NULL;}
    }

## Printing Trees ##

    void PrintTree(){
      PrintInOrder(rootPtr);
      // PrintPreOrder(rootPtr);
      // PrintPostOrder(rootPtr);
    }

    PrintInOrder(TreePtr ptr){
      if(ptr != NULL){
        PrintInOrder(ptr->left);

        cout << ptr->data << endl;

        PrintInOrder(ptr->right);
      }
    }

    PrintPreOrder()

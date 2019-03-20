# Tree Traversals #
Common Data Types:
1. arrays
2. lists
3. trees

## Typical Traversal Methods ##
* Loops for arrays and lists
* Recursion for Trees
* Recursion also for lists and arrays
* Loops also for trees


## Tree Traversals/Walking the Tree ##
Programs that use trees often need to process all of the nodes in a tree.

For Binary Tree:
* Pre-order
* In-order
* Post-order


## Typical Binary Tree Representation ##
    struct BinaryTreeNode{
      int data;
      BinaryTreeNode* left;
      BinaryTreeNode* right;
    };

Typical Tree:

                      5
                    /   \
                  17     11
                 /  \
                9    41
               / \
            NULL  13



_**Pre-order Traversal (root left right):**_
1. Process the root
2. Process the nodes in the left subtree (recursion)
3. Process the nodes in the right subtree (recursion)

        void PrintPreOrder(BinaryTreeNodePtr t){
          if(t!=NULL){
            cout << t->data << endl;

            PrintPreOrder(t->left);

            PrintPreOrder(t->right);
          }
        }

5 17 9 13 41 11

_**In-order Traversal (left root right):**_
1. Process the nodes in the left subtree (recursion)
2. Process the root
3. Process the nodes in the right subtree (recursion)

        void PrintInOrder(BinaryTreeNodePtr t){
          if(t!=NULL){

            PrintInOrder(t->left);

            cout << t->data << endl;

            PrintInOrder(t->right);
          }
        }

9 13 17 41 5 11

_**Post-order Taversal (left right root):**_
1. Process the nodes in the left subtree
2. Process the nodes in the right subtree
3. Process the root

          void PrintPostOrder(BinaryTreeNodePtr t){
            if(t!=NULL){

              PrintPostOrder(t->left);

              PrintPostOrder(t->right);

              cout << t->data << endl;  
            }
          }

13 9 41 17 11 5

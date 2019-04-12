# Other Types of Trees #

* Heaps (Priority Trees)
  * Used in system applications

* AVL Trees
  * Named for Adel'son-Vel'skii and Landis
  * balanced binary tree. Since the heights of the left and right subtrees of any node in a balanced binary tree differ by no more than one 1, You can search an AVL tree almost as efficiently as a minimum-height binary search tree.
    * AVL trees maintain height close to the minimum
    * Rotations maintain a height close to the minimum

* 2-3 and 2-3-4 Trees
  * Trees that may have up to 3 children and so are not binary trees
  * As a result the leaves have the same level and are relatively balanced

* Red-Black Trees
  * Form of Binary Search Tree, but has the performance of the 2-3 and 2-3-4.

* Optimal Search Trees
  * While we have been interested in trees that have frequency of access that is equal for all nodes. All keys are equally likely. There are cases in which the access probabilities are known. For these trees, the tree remains the same-no insertions  or deletions. An optimal search tree can be constructed for such cases.
  * Optimal search trees are used in some compilers to determine if a token is a keyword or not. To elevate these terms the target is placed closer to the root.

* B-Trees
  * B-Trees have the following characteristics: n is said to be the order of the B-Tree. A tree can be subdivided into subtrees and the subtrees represented as units which are all accessed all together.  These subtrees are called pages.
  
* B*-Trees and B+-Trees
* Quadtrees and Octrees
* FInger Trees
* Splay Trees

# Heap Storage Rules #
_**Min or Max Heap:**_
1. The entry contained by a node is greater than (less than) or equal to the entries of the node's children
2. The tree is a complete tree, so that every level except the deepest must contain as many nodes as possible. At the deepest level, all the nodes are as far _**left**_ as possible.

_**Complete Tree:**_
a complete tree is filled from left to right and is "balanced"

# Heap Implementation #
Since a heap in complete binary tree, and a complete binary tree is more easily implemented using an array than with pointers. If the maximum size of a heap is known in advance,  then an array implementation can use a fixed-size array.

If there are n nodes, only the first n positions of an array, A, are used.

### Useful parent-child node relationships ###
* The left child of a node is: 2i+1
* The right child of a node is: 2i+2
* The parent of a node is: (i-1)/2 - integer division

i = index of array


               45
            /     \
         35        23
        /  \      /  \
      27   21   22    4

i = 0  1  2  3  4  5  6
    45 35 23 27 21 22 4

### Adding New Nodes to Heap ###
This often leads to reheapification because the new element will often be bigger than its parent.

To reheapifiy we just need to exchange the parent and the child until the parent is greater than the child.

_**Pseudocode for Adding New Node:**_
1. Place the new entry in the heap in the first available location.

This keeps the structure a complete binary tree

2. while (the new entry's priority is hight an its parent)
      Swap the new entry with its parent

_**Pseudocode for Deleting the Top Entry**_
1. Move the last node of the tree into the root.
2. Move the out of place node downward, swapping with its larger child until the new node reaches an acceptable location.


### Reading JSON Files ###
'[' = the start of an array
']' = the end of an array
'{' = the beginning of an object
'}' = the end of an object
',' = separates the objects

_**Data Storage**_
each new piece of data is identified with a tag in quotes followed by a ':', followed by the data in quotes

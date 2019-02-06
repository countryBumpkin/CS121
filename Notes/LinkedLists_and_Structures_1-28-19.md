# Linked Lists and Structs #

#### Linked Lists ####
_Linked Lists_ are linear collections of self-referential objects (nodes), connected by pointer links. Data is stored in linked lists dynamically-each node is created as necessary. A node can contain data of any type including objects of other classes (structs).

_** Test Cases **_
1. Empty List
2. One Node

###### Common List Operations ######
* Print
  * _Loop through the list, starting at head. For each element check to make sure the node is not NULL and then print the information in the node. Finally, increment the pointer in your loop._
* Size/Length
  * _Loop through the list while the current node is not NULL and for every non-NULL value, increment the count._  
* Insertion
  * _**Always Check if head == NULL**_

  * _This function varies depending on whether we are inserting to the front, back, or middle but the basic steps are as follows:_
    1. Allocate Memory
    2. Initialize Values
    3. Add Node
  * _**For Adding To The End:** Allocate new node, initialize new node, place it in desired location_

  * _**For Adding To The Front:** Allocate and initialize the new node, if the list is empty, set to the head. Else set the new node's next node pointer to head and then set the new node to head._
  * _**For Adding to the Middle:** Iterate through the list until you reach the desired location. Then set the node above to point to your new node. Set new node to point to the node below. Mission accomplished._
* Deletion
  * _**Always set head->next = NULL**_

  * _This function also varies on the desired location that we pull from but it generally follows this pattern:_
    1. Find Nodes
    2. Update (Break) Links
    3. Release Memory of Deleted Node
  * _**For Removing Last Node:** Iterate through the list and after reaching the second to last node remove that node and reset the pointers._

  * _**For Removing First Node:** Set Head to point to the node following the head and then deallocate the memory for the former first node._

---
_**Note:**_
    When adding a new node, always initialize the value of the pointer to the next node to NULL. This covers the cases when we need to add a node to the end of the list.
---

#### Other Dynamic Data Structures ####
* Stacks
* Queues
* Trees (non-linear data structures)
  * _In their simplest form trees have two pointers, one to the left and right._

### Keyword _**typedef**_ ###
The _typedef_ keyword allows us to define data types for later use in our classes and structures. It can be useful for shortening names of variables and defining more descriptive data types.

_**Example:**_

    typedef unsigned int total_life; // Defines a data type called total_life

    // How to use our new data type
  total_life my_func(void){} // Function that returns the value total_life

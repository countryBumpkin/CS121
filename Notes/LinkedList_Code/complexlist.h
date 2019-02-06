// Compiler Guards
#ifndef

#include <iostream>

#endif


#include <iostream>

using namespace std;

struct Node{
  int info;
  struct Node* next;
};

typedef struct Node* Nodeptr;

class LinkedList{
public:
  LinkedList(); // Default: create empty list
  LinkedList(int info); // Create list with one node

  AddToFront(int info); // Add node to front of list
  AddToBack(int info);  // Add node to end of list
  InsertAt(int index, int info);  // Insert the node after the nth node

private:
  Nodeptr head = NULL;

};

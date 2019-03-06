
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <iostream>
using namespace std;

//----------

struct Node{
  string name; // Name of the customer
  int transactions; // Number of transactions the customer is conducting
  char transactionType; // Checking, Deposit, New Account, Reconcile Account
  int entryTime; // Entry time of customer
  struct Node* next; // Pointer to the next node in the list
};

typedef struct Node Node;
typedef Node* Nodeptr;

//----------

class LinkedList{
private:
  Nodeptr head; // First Node in the list
  int size; // Number of elements in the list

public:
  LinkedList(void); // Creates new empty list

  void AddToEnd(int entryTime, string name, char transactionType, int numTransactions); // Adds node to end of list
  void AddToFront(int entryTime, string name, char transactionType, int numTransactions); // Adds node to front of list

  Node RemoveFromFront(void); // Remove the node from the front, return name
  Node RemoveFromBack(void); // Remove the node from the back and return name

  void Print(void); // Print contents of list
  Node Peek(void); // Return a pointer to the first Node in the list
  int getSize(void); // Return the number of Nodes in the list
};

#endif

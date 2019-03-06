/*

  Implementation file for LinkedList
  @author: Garrett Wells
  @date: 2-24-19

*/

#include "linkedlist.h"

 // Creates new empty list
LinkedList::LinkedList(void){
  head = NULL;
  size = 0;
}

// Adds node to end of list
void LinkedList::AddToEnd(int entryTime, string name, char transactionType, int numTransactions){

  Nodeptr ptr = new Node();
  ptr->entryTime = entryTime;
  ptr->name = name;
  ptr->transactions = numTransactions;
  ptr->transactionType = transactionType;
  ptr->next = NULL;

  if(head == NULL){
    head = ptr;
  }else{
    Nodeptr itr = head;

    while(itr->next != NULL){
      itr = itr->next;
    }

    itr->next = ptr;
  }

  size++;
}

// Adds node to front of list
void LinkedList::AddToFront(int entryTime, string name, char transactionType, int numTransactions){
  Nodeptr ptr = new Node();
  ptr->entryTime = entryTime;
  ptr->name = name;
  ptr->transactions = numTransactions;
  ptr->transactionType = transactionType;
  ptr->next = NULL;

  if(head == NULL){
    head = ptr;
  }else{
    ptr->next = head;
    head = ptr;
  }

  size++;
}

// Remove the node from the front, return name
Node LinkedList::RemoveFromFront(void){
  if(head != NULL){
    Nodeptr ptr = head;
    head = head->next;

    Node temp = *ptr; // Save value in the Node
    delete ptr; // Delete the Node pointer

    size--;

    return temp;

  }else{
    size = 0;
    cout << "[ERROR]: empty list" << endl;
    return *head;
  }
}

// Remove the node from the back and return name
Node LinkedList::RemoveFromBack(void){
  if(head != NULL){
    // Traverse list and return last Node
    Nodeptr ptr = head;
    Nodeptr itr = head;

    while(ptr->next != NULL){
      itr = ptr;
      ptr = ptr->next;
    }

    Node temp = *ptr; // Save values stored by last Node
    delete ptr; // Delete the Node
    itr->next = NULL; // Break link

    size--;

    return temp;

  }else{
    size = 0;
    cout << "[ERROR]: empty list" << endl;
    return *head;
  }
}

// Returns head
Node LinkedList::Peek(void){
  return *head;
}

// Returns the number of Nodes in the list
int LinkedList::getSize(void){
  return size;
}

void LinkedList::Print(void){
  if(head != NULL){
    Nodeptr itr = head;

    while(itr->next != NULL){
      cout << itr->name << endl
           << "Entry Time: " << itr->entryTime << endl
           << "Transactions: " << itr->transactions << endl
           << "Transaction Type: " << itr->transactionType << endl;

      itr = itr->next;
    }

    cout << itr->name << endl
         << "Entry Time: " << itr->entryTime << endl
         << "Transactions: " << itr->transactions << endl
         << "Transaction Type: " << itr->transactionType << endl;

  }else{
    cout << "\n";
  }
}

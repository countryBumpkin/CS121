/*

  Interface for Queue
  @author: Garrett Wells
  @date: 3-1-19

*/

#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.cpp"

class Queue{
private:
    LinkedList list;

public:
  Queue(void); // Create new queue

  void Enqueue(int entryTime, string name, char transactionType, int numTransactions); // Add customer to queue end of queue

  Node Remove(void); // Remove the customer at the end of the queue
  Node Dequeue(void); // Remove the customer at the front of the queue

  Node Peek(void); // Return a pointer to the Node at the front of the queue
  int getSize(void); // Return the number of Nodes in the list
  void Print(void); // Print details of all nodes in the list
};

#endif

/*

  Implementation file for queue
  @author: Garrett Wells
  @date: 3-2-19

*/

#include "queue.h"

// Create new queue
Queue::Queue(void){
}

// Add customer to queue
void Queue::Enqueue(int entryTime, string name, char transactionType, int numTransactions){
  list.AddToEnd(entryTime, name, transactionType, numTransactions);
}

// Remove the customer at the end of the queue
Node Queue::Remove(void){
  return list.RemoveFromBack();
}

 // Remove the customer at the front of the queue
Node Queue::Dequeue(void){
  return list.RemoveFromFront();
}

// Return the number of Nodes in the list
int Queue::getSize(void) {
  return list.getSize();
}

// Call LinkedList.Print()
void Queue::Print(void){
  if(list.getSize() != 0){
    list.Print();
  }
}

// Return the first node in the line
Node Queue::Peek(void) {
    return list.Peek();
}

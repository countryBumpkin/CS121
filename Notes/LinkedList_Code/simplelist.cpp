/* Single file Implementation of linked list */

#include <iostream>

using namespace std;

struct Node{
  int info;
  struct Node * next;

};

typedef struct Node * Nodeptr;

Nodeptr head = NULL;



void AddToFront(int x){
  // Allocate
  Nodeptr n = new Node;
  n->info = x;
  n->next = NULL;

  //Place
  if(head == NULL){
    head = n;
  }else{
    n->next = head;
    head = n;
  }
}

void PrintList(){
  Nodeptr p = head;

  while(p != NULL){
    cout << p->info << endl;
    p = p->next;
  }
}

int main(){
  AddToFront( 3 );
  AddToFront(2);
  AddToFront(1);

  cout << "Initial List..." << endl;
  PrintList();

  return 0;
}

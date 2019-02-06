#include "complexlist.h"

LinkedList::LinkedList(void){
  head = NULL; // Empty!
}

LinkedList::LinkedList(int info){
  head = new Node(info, NULL);
}

LinkedList::AddToFront(int info){
  Nodeptr p = new Node(info, NULL);

  if(head != NULL){
    p->next = head;
    head = p;

  }else{
    head = p;

  }
}

LinkedList::AddToBack(int info){

  Nodeptr p = new Node(info, NULL);

  if(head != NULL){
    Nodeptr itr = head;

    while (itr->next != NULL){
      itr = itr->next;
    }

    itr2->next = p;

  }else{
    head = p;

  }

}

/*
 * If the list is not empty, add the element to the selected index
LinkedList::InsertAt(int index, int info){
  Nodeptr p = new Node(info, NULL);
}

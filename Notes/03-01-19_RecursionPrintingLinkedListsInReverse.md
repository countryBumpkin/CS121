# Recursion In Data Types #


## Linked Lists - Printing a List in Reverse ##
Performing this operation without recursion would require a vast amount of effort and either need stacks or doubly linked lists.

    void PrintListInReverse( Nodeptr h )
    {
      if (h != NULL){
        PrintListInReverse(h->next); // Print next value
        cout << "_" << h->info; // Prints as the function backs out
      }
    }

_**To add a Node to a LinkedList recursively**_

    void AddNodeRecursive( NodePtr& h, int x){
      if( h!= NULL){
        AddNodeRecursive( h->next, x);
      }else{
        NodePtr n;

        n = new Node;
        n->info = x;
        n->next = NULL;

        h = n;
      }
    }

_**Pass By Pointer**_

    // This code fails
    // We use NodePtr* instead of Node*& because the later fails
    void AddNodeRecursive2(NodePtr* h, int x){
      if(*h != NULL){
        AddNodeRecursive2((*h)->next, x);
      }else{
        NodePtr n;

        n = new Node;
        n->info = x;
        n->next = NULL;

        *h = n;
      }
    }

    // This code compiles
    void AddNodeRecursive2(NodePtr* h, int x){
      if(*h != NULL){
        AddNodeRecursive2(&((*h))->next, x); // only change this line
      }else{
        NodePtr n;

        n = new Node;
        n->info = x;
        n->next = NULL;

        *h = n;
      }
    }

#ifndef TESTER_H
#define TESTER_H

class Tester{
private:
  int numTestsPassed;
  int numTests;

public:
  Tester(void);

  int testQueue(void);
  int testLinkedList(void);
};

Tester::Tester(void){
  numTests = 3;
  numTestsPassed = 0;

  numTestsPassed += testLinkedList();
  numTestsPassed += testQueue();
  numTestsPassed += testBankSim();

  std:cout << "----- Test Results -----" << endl
           << "Tests Passsed: " << numTestsPassed << "/" << numTests << endl;
}

int Tester::testLinkedList(void){
  LinkedList list;

  list.AddToEnd(1, "adam", 'C', 2);
  list.AddToEnd(2, "barry", 'D', 1);
  list.AddToEnd(3, "calum", 'N', 3);

  list.Print();

  Node temp;

  temp = list.RemoveFromFront();
  if(temp.name != "adam")
  {
    return 0;
  }

  temp = list.RemoveFromBack();
  if(temp.name != "calum")
  {
    return 0;
  }

  temp = list.RemoveFromFront();
  if(temp.name != "barry")
  {
    return 0;
  }

  return 1;
}

int Tester::testQueue(void){
  // Create new Queue of customers and remove them and print their data
  Node ptr;
  Queue line;

  line.Enqueue(1, "adam", 'C', 2);
  line.Enqueue(2, "barry", 'D', 1);
  line.Enqueue(3, "calum", 'N', 3);

  cout << "---------- Printing Queue ----------" << endl;
  // Print Queue contents
  line.Print();

  cout << "---------- Dequeueing Contents ----------" << endl;
  // Dequeue contents and print in order
  ptr = line.Dequeue();
  if(ptr.name != "adam"){return 0;}

  ptr = line.Dequeue();
  if(ptr.name != "barry"){return 0;}

  ptr = line.Dequeue();
  if(ptr.name != "calum"){return 0;}

  cout << "---------- Dequeueing Successful ----------" << endl;

  return 1;
}

#endif

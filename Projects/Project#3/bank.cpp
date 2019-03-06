/*

  Application File for Bank
  @author: Garrett Wells
  @date: 3-4-19

*/

#include "queue.cpp"
#include "tester.cpp"
#include <fstream>

bool linesEmpty(Queue line1, Queue line2, Queue line3);
void printCustomer(Node customer, int exitTime);
void AddToLine(Node nextUp);
void runTests(void);
void PrintLines(void);

Queue expressLine;
Queue line2;
Queue line3;
Queue waiting;

int main(void){
  // Run Tests
  //runTests();

  //Run Bank Simulation
  // temporary variables to hold data
  int entryTime;
  string customerName;
  char transactionType;
  int numTrans;

  // Read from file --------------------------------
  ifstream input("/Users/garrettwells/Documents/2018-19_UofI/2nd_Semester/CS121/Projects/Project#3/bank1.dat");
  while(!input.eof() && input.is_open()){
    for(int i = 0; i < 4; i++){
      if(i == 0)
        input >> entryTime;
      if(i == 1)
        input >> customerName;
      if(i == 2)
        input >> transactionType;
      if(i == 3)
        input >> numTrans;

    }
    waiting.Enqueue(entryTime, customerName, transactionType, numTrans);
  }

  input.close();


  // Banking Loop -----------------------------------
  int clk = 0;
  int expressLineStart = 0;
  int line2Start = 0;
  int line3Start = 0;

  while((waiting.getSize() > 0) || !linesEmpty(expressLine, line2, line3)){

    bool someLineEmpty = expressLine.getSize() == 0 || line2.getSize() == 0 || line3.getSize() == 0;
    bool someLineExcess = (expressLine.getSize() > 1) || (line2.getSize() > 1) || (line3.getSize() > 1);

    // If there is an empty line, and there is some line with more than 1 node, then transfer a node from the longest line to the shortest
    while(someLineEmpty && someLineExcess){

      bool line2IsLongest = (line2.getSize() > line3.getSize()) && (line2.getSize() > expressLine.getSize());
      bool line3IsLongest = ((line3.getSize() > line2.getSize()) && (line3.getSize() > expressLine.getSize()));
      bool expressIsLongest = !line2IsLongest && !line3IsLongest;

      bool line2Shortest = (line2.getSize() < line3.getSize()) && (line2.getSize() < expressLine.getSize());
      bool line3Shortest = (line3.getSize() < line2.getSize()) && (line3.getSize() < expressLine.getSize());
      bool expressShortest = !line2Shortest && !line3Shortest;

      // Get the node to transfer to the empty line
      // Check if shortest line is express, if it is we need to put some restrictions on the transfer
      if(expressShortest) {
        // Add the node to the empty line

        Node temp;
        if(line2IsLongest){
          temp = line2.Remove();
        }else if(line3IsLongest){
          temp = line3.Remove();
        }else {
          temp = expressLine.Remove();
        }

        bool validTrans = ((temp.transactionType == 'C') || (temp.transactionType == 'D'));

        if(validTrans){
          // Add the node
          AddToLine(temp);
        }else{ // Look for another possible transfer
          /*If second longest line has more than 2 nodes and the node has valid transaction - > transfer it*/
          // Move from second longest to express line
          if(line2IsLongest && (line3.getSize() > 1)){
            validTrans = (line3.Peek().transactionType == 'C') || (line3.Peek().transactionType == 'D');
            if(validTrans) AddToLine(line3.Remove());
          }else if(line2.getSize() > 1){
            // Try line 2
            validTrans = (line2.Peek().transactionType == 'C') || (line2.Peek().transactionType == 'D');
            if(validTrans) AddToLine(line2.Remove());
          }else{
            // No alternative transfer
            break;
          }
        }

      }else{
        // Add the node to whatever the shortest line is
        Node temp;
        if(line2IsLongest){
          temp = line2.Remove();

        }else if(line3IsLongest){
          temp = line3.Remove();
        }else {
          temp = expressLine.Remove();

        }
        AddToLine(temp);
      }


      someLineEmpty = expressLine.getSize() == 0 || line2.getSize() == 0 || line3.getSize() == 0;
      someLineExcess = (expressLine.getSize() > 1) || (line2.getSize() > 1) || (line3.getSize() > 1);

    }

    // Add new customer to line
    if(waiting.getSize() > 0){
      Node first = waiting.Peek();

      if(first.entryTime == clk) {

        while (first.entryTime == clk) {
          cout << "-------------------------------------"
               << "\n"
               << "| Adding New Customer to Line: " << waiting.Peek().name << " |\n" << endl
               << "-------------------------------------" << endl << endl;

          AddToLine(waiting.Dequeue());


          if(waiting.getSize() > 0) {
            first = waiting.Peek();
          }else break;
        }
      }
    }

    // Check for the customers who have completed their transactions
    // Remove the customers who are done
    // Print their information
    if(linesEmpty(expressLine, line2, line3)){clk++; continue;}

    if(expressLine.getSize() > 0){
      Node expressLineFront = expressLine.Peek();

      bool transactionsCompleted = (expressLineFront.entryTime + (expressLineFront.transactions * 2) == clk);

      if(transactionsCompleted) {
        expressLineFront = expressLine.Dequeue();
        printCustomer(expressLineFront, clk);
      }
    }

    if(line2.getSize() > 0){
      Node line2Front = line2.Peek();

      bool transactionsCompleted = (line2Front.entryTime + (line2Front.transactions * 4) == clk);

      if(transactionsCompleted){
        line2Front = line2.Dequeue();
        printCustomer(line2Front, clk);
      }
    }

    if(line3.getSize() > 0){
      Node line3Front = line3.Peek();

      bool transactionsCompleted = (line3Front.entryTime + (line3Front.transactions * 4) == clk);

      if(transactionsCompleted){
        line3Front = line3.Dequeue();
        printCustomer(line3Front, clk);
      }
    }

    clk+=1;
  }
}

// Run Tests
void runTests(void){
  Tester a;
}

// Check if lines are empty and returns true if all customers have finished their transactions
bool linesEmpty(Queue line1, Queue line2, Queue line3){
  return ((line1.getSize() == 0) && (line2.getSize() == 0) && (line3.getSize() == 0));
}

// Print data stored by the customer
void printCustomer(Node customer, int exitTime){
  cout << "          |---------- Customer Leaving ----------" << endl
       << "          |Name: " << customer.name << endl
       << "          |Entry Time: " << customer.entryTime << endl
       << "          |Transaction Type: " << customer.transactionType << endl
       << "          |Number of Transactions: " << customer.transactions << endl
       << "          |Exit Time: " << exitTime << endl
       << "          |--------------------------------------" << endl << endl;
}

// Print Lines
void PrintLines(void){
  cout << "--------- Express Line: -----------" << endl;
  expressLine.Print();

  cout << "----------- Line 2: ----------" << endl;
  line2.Print();

  cout << "----------- Line 3: ----------" << endl;
  line3.Print();

}

// Find shortest line to add Node to
void AddToLine(Node nextUp){

  int expressLength = expressLine.getSize();
  int line2Length = line2.getSize();
  int line3Length = line3.getSize();

  bool expressShortest = (expressLength <= line2Length) && (expressLength <= line3Length);
  bool expressEligible = (nextUp.transactionType == 'C' || nextUp.transactionType == 'D');

  if(expressEligible && expressShortest) {
    // Add node to expressLine
    expressLine.Enqueue(nextUp.entryTime, nextUp.name, nextUp.transactionType, nextUp.transactions);

  }else if((line2Length < line3Length)){
    // Add node to line2
    line2.Enqueue(nextUp.entryTime, nextUp.name, nextUp.transactionType, nextUp.transactions);

  }else{
    // Add node to line3
    line3.Enqueue(nextUp.entryTime, nextUp.name, nextUp.transactionType, nextUp.transactions);

  }
}

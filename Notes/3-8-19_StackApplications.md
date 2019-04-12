# Stack Applications #
Here are some common cases where stacks are used to handle simple operations.

* Expression Evaluation
  - Postfix (aka RPN) evaluation
  - Infix to Postfix conversion

* History
  - Undo/Redo operation
  - Game state/replay

* Simulating recursion

## Application: Towers of Hanoi ##
The objective of the puzzle is to move the entire stack of disks to another rod, subject to the following rules:

* Only one disk may be moved at a time.
* A disk may not be placed on top of a smaller disk
* Each move consists of taking the topmost disk from one of the rods and placing it onto another rod, on top of any other disks that may already be present on that rod.

      #include <iostream>
      using namespace std;

      void Hanoi(int nDisks, char fromPeg, char usePeg, char toPeg);

      int main(void){
        cout << "Starting ..." << endl;

        Hanoi(3, 'A', 'B', 'C');

        cout << "Done..." << endl;

        return 0;
      }

      // Using recursion
      void Hanoi(int nDisks, char fromPeg, char usePeg, char toPeg){

        if(nDisks == 1){
          cout << "Move top disk from " << fromPeg
               << " to Peg " << toPeg << endl;

        }else{
          Hanoi( nDisks-1, fromPeg, toPeg, usePeg);
          Hanoi( 1, fromPeg, usePeg, toPeg);
          Hanoi( nDisks-1, usePeg, fromPeg, toPeg);
        }
      }

      // Using stacks
      void Hanoi(int nDisks, char fromPeg, char usePeg, char toPeg){

        Stack<Move> s;

        s.Push(Move(nDisks, fromPeg, usePeg, toPeg));

        while(!s.isEmpty()){
          Move m = s.Pop();
          char fPeg, uPeg, tPeg;

          n = m.nDisks; // Don't use get functions because those require more overhead
          fPeg = m.fromPeg;
          uPeg = m.usePeg;
          tPeg = m.toPeg;

          if(n==1){
            cout << "Move top disk from peg " << fPeg
                 << " to peg " << tPeg << endl;
          }else{
            s.Push(Move(n-1, uPeg, fPeg, tPeg));
            s.Push(Move(1, fPeg, uPeg, tPeg));
            s.Push(Move(n-1, uPeg, fromPeg, toPeg));
          }
        }


      }

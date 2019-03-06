# Stacks #
_**What is a stack?**_
* Last in First out (LIFO) data structure, more specifically a pile of things.
* Uses:
    * Activation records are maintained when a  program is executed
    * Compilers use stacks of symbols when parsing source code
    * Simulate Recursion
    * Graphics - Transformation matrices
    * Calculators - Reverse Polish Notation (RPN)
    * Programming Languages
      * Argument passing
      * PostScript - Graphics Language from Adobe
      * Forth - Stack oriented, used by astronomers/physicists
      * JVM (Java Virtual Machine)


##### Infix #####
Take statement:

    2+2

This is called the infix because the operator is between the numbers.

##### Postfix #####
The postfix version of the previous statement is:

    2 2 +

##### Prefix #####
The prefix version is:

    + 2 2

## Stack Behavior ##
Stack Operations:
* **Push** (add to top of stack)
      s.push(x);

* **Pop**  (remove from top of stack)
      x = s.pop();

* **Peek** (get value from next item on stack)
      x = s.peek();

* **Print** / **Show** (Print from stack)

## Interface ##

    class Stack{
    public:
      Stack();

      void Push(char c);
      char Pop();

      bool IsEmpty();

      void Print();

    private:
      struct StackNode{
        char info;
        struct stackNode* next;
      };

      typedef struct stackNode StackNode;
      typedef StackNode* StackNodePtr;

      StackNumberPtr top;
    }

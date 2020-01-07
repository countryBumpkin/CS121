# Templates #
Templates allow us to create generic code, i.e., one code base for many/all data types, instead of code for each particular data type.

Templates can be defined for:
* Functions
* Classes

## Template Function ##
How to define a Template using macros:

    #define SQUARE(x) (x*x) // Note lack of spaces in (x*x)
    #define MIN(X, Y) ((X) < (Y) ? (X) : (Y)) // : is the ternary operator

How to define a Template using template:

    template <typename T>
    T square(T x){
      return x * x;
    }

    // To call template square
    cout << square<int>(3) << endl;
    cout << square<double(3.1) << endl;
    


Template Classes:

      template<class C> class String {

        struct Srep;
        Srep *rep;

      public:

        String();
        String(const *C);
        void func1();

      };

      // Usage
      int main(){
        String<int> a();
      }

Templates may cause code bloat since templates expand in place. This could become an error when working on memory limited systems.

Some Details:
* All code is in header files
* template<class C> specifies that a template is being declared and that an argument C of data type type will be used in the declaration
* Default types can be set for templates like so: template<typename T = int>
* Multiple types can be used in a template: template<typename T, typename U>
* C is used like any other type name

_**Note:**_ All macro names are all caps by convention. Also note that macro templates have no type definition that they will return.

## STL - Standard Template Library ##
STL contains 6 kinds of components:
* containers
* container adapters
* iterators
* algorithms
* functors (function objects)
* function adapters

STL includes stacks, queues, and trees.

## Linked List Template Class ##

    #include <iostream>

    template<class LLT>
    class LinkedList {
      private:
        struct node{
          LLT info;
          node* node;
        };

        typedef node* nodeptr;

        nodeptr head;

        int count;

      public:
        LinkedList(){
          head = NULL;
          count = 0;
        }

        ~LinkedList(){
          // Stuff
        }

        // Prototypes
        void AddNode(LLT x);
        void DeleteNode();
        void PrintNodes();
        // etc
    };

    template<class LLT>
    void LinkedList<LLT>::AddNode(LLT x){
      // Stuff
    }

    template<class LLT>
    void LinkedList<LLT>::DeleteNode(){
      // More stuff
    }

    // How to use this
    LinkedList<int> L1;

    L1.AddNode(3);

## MISC ##
_**inline:**_ Runs the code in place instead of calling from the

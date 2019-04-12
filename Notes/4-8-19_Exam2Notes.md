# Exam Breakdown #

* Basic Concepts (T/F) (20pts)

* Data Structures and Concepts (25pts)
  * Big-*O*(N)
  * short answer

* Tree Concepts (15pts)
  * Traversal, etc
  * Heaps?

* Hashing (15pts)
* Programming (30pts)
  * Functions (3)


## Trees ##
 - Definition
 - Traversals (4 types, pre-order, etc)
 - BSTrees
 - Other trees (AVL, 2-3, Red-Black, etc)

## BIG-*O* ##
Know how to calculate these.

| Big-*O*     | Reaction         |
| ----------- | ---------------- |
| *O*(1)      |  *O*(yeah)       |
| *O*(log(n)) |  *O*(nice)       |
| *O*(n)      |  *O*(k)          |
| *O*(n log n)|  *O*(well)       |
| *O*(n^2)    |  *O*(my)         |
| *O*(2^n)    |  *O*(no)         |
| *O*(n!)     | *O*(mg!)         |
| *O*(n^n)    | *O*(*obscenity*) |

## Hash Tables ##
Know:

* Code
* The two types of collision resolution

## Trees ##
See "OtherTrees.md"

## Heaps ##
Next exam

## Char Arrays ##
Not on this Exam

## Recursion ##

## C++ Basics/File IO

    // Writing to file
    ofstream file(file_name) or ofstream file
    file.open()
    file << variable_name
    file.close()

    // Reading from file
    ifstream file(file_name) or ifstream file
    file.open()
    file >> variable_name;
    file.close()

    cin >> variable_name

    getline(cin, variable_name)

## Declaring Variables
    int a, b;
    class_name var_name(constructor_variables)
    class_name var_name()

    // Dynamic declaration
    int* var = new int;
    delete var;

    // Array declaration
    int arr[arr_size];
    int arr[] = {1,2,3};
    int arr[][] = {{1,2,3},{1,2,3,4}}
    int a[] = {1,2}, b[] = {1,2,3}


## Arrays ##

## Classes (including definition, declaration, and templates)

    class object_name{
      private:
      public:
    };

    template<typename T>
    T function_name(T input){
      // stuff
      return T;
    }

    // OR

    template<class T> class Point{
      T x, y;

      Point(T x, T y);
    }

_** See Templates.md **_

## Linked Lists ##
Decrease run-time.

## Stacks ##
What is it? A queue is a FIFO data structure that acts like a line. Usually implemented with a Linked List

## Queues ##
What is it?

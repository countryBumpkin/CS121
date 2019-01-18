# Design Basics #
_**Why make a program design?:**_ Although tedious, it is important to outline what is being put into the program and what the expected outputs will be. It also helps us identify ways to break the problem down into smaller, more manageable parts. This improves the modularity of the program. If the program is modular we can reuse the code snippets as needed, even for different tasks than they were originally written for.

### General Program Operation ###
The operation of almost all programs can be defined by the following sequence of operations:

    Input           ---> Calculation       ---> Output
    /Initialization      /Work                  /Cleanup

### Program Development Process ###
1. Identify required inputs and outputs
1. Develop _**Test Cases**_
1. Perform _**Sample Calculations**_
1. Decide how output will be displayed (files or graphically).
1. Make an overall design of the program. Include the general method-the algorithms-by which the program computes the output.
1. Refine the overall design by specifying more detail.
1. Write the program code.

### Things to Include in Write-Up ###
_**keep in mind**_ Bolden's examples for these were written as paragraph answers or bullet point lists.
1. Program Overview
    * _What is your program doing?_
1. Data Format
    * _What information will you be encoding and how will it be handled?_
1. Internal Data Structure
    * _How is the data stored? What type of data structure are you using?_
1. General Program Operation
    * _What are the operations and problems that your program will have to go through during execution?_
1. Functions
    * _Outline the functions you will be using in the program. Include a short statement of purpose and what the return value will be._
1. Auxilliary Functions
    * _Outline helper functions that could be incorporated into the functionality of some other function but we want to be modular._
1. Steps for Implementation
    * _Include time estimate and steps for debugging after writing functions. This should include the research you did and basic information you gleaned._
1. Programming Log
    * _What did you do and when did you do it?_


# Pseudo Code #
Given an overall design, including input, output, and any algorithms. How do we turn this into a program? A common technique is to use pseudocode. Pseudocode is an informal way of writing the functional code to implement the program design.

_Example:_

    int ReadInteger(fstream& fIn){
      int iTmp;
      fIn >> iTmp;
      return iTmp;
    }

_vs Pseudocode_

    readInt

##### Pseudocode for Looping #####
    for element in array {} // Iterates through all elements in an array

# Flow Charts #
Flow charts are a detailed diagram of how a program/function is to operate. However, many people find them tedious to draw. Fortunately, there are applications for drawing them.

# Dynamic Allocation #

#### One-Dimensional Array Manipulation ####

    int *pA; // new pointer to array

    pA = new int[N]; // Allocate new array of size N

    delete [] pA; // Release the memory

Once the pointer is initialized and points to the array, we can access it like a normal array.

#### Two-Dimensional Array Manipulation ####

    int** arr2D; // new two dimensional pointer

    arr2D = new int*[R]; // Initialize the array with R rows of pointers

    // Allocate the second dimension
    for( int i = 0; i < R; i++){
      ar2D[i] = new int[C];
      if(arr2D[i] == NULL){
        ERROR MESSAGE;
      }
    }

    //To release, perform the reverse of the last step
    for{delete arr2D[i]}

Two-dimensional arrays are arrays of pointers. These pointers point to the second dimension of the array.

# Miscellaneous #
* Category Theory (Azimuth)
* Swift vs Kotlin vs Dart

_**"Never store data if you don't have to."**_ - Bruce Bolden (2019)

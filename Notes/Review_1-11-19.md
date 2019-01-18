# Pointers: Why do we care? #
We care because they use dynamic memory which is a powerful way to manipulate memory.

Modern programming languages support dynamic memory management in some way:
* Explicit programmer control (C/C++)
* Environment control (Java, C#, Scheme)
  * new version of Scheme is Racket
* A combination (Objective-C)

## Linked Lists ##
* Dynamic (change at run time)
  * This means that we use only as much memory as is needed, no more, no less
* Homogenous (typically)
* Access items using pointers
* Not necessarily stored in contiguous locations

_Break the Chain_ - Fleetwood Mac

## Static Allocation ##
Memory for the pointer variables is static because we don't need more than that

## Dynamic Allocation ##
Memory allocated at run time (execution). This relies on the keyword _new_.

_**Note:**_
When data is dynamically allocated, the compiler does not initialize it with a default value.

To release the memory back to the system we use the keyword _delete_. In C this is called _free_, and expects a null pointer.

    delete var;
    // or
    delete [] array;

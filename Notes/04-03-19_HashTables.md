# Hash Tables #
Searching for an element in a tree can be very fast, but slows down as the number of items increases (at best *O*(log N)).

_**Why?**_

* Tree imbalance
* No direct access (chasing pointers)

_**So... what about using an array instead?**_

* Direct access
* Not working with just numbers

**Therefore we need a conversion between the two**


## Hashing ##
A **Hash Function** transforms keys into an array index.

  One possible implementation is to sum the ASCII values of each character in a string and mod it with the table size. For example, given a n array with 120 elements and the string JONES:

  J 74

  O 79

  N 78

  E 69

  S 83

  74 + 79 + 78 + 69 + 83 = 383, this is the "value" of the string
  383 % 120 (size of array - 1) = 23 // This will be the index we insert the string at

**However:** Hash tables do not work very well if you have repeat values because...
One **problem** with all hash function is that they lead to collisions. A collision is the result of two or more keys hashing to the same value (location).

## Collision Resolution ##
Need some sort of collision resolution strategy to handle collisions when they occur.

Two common strategies:
1. Linear Resolution
2. Open Hashing

#### Linear Resolution ####
**This is the simplest resolution.**

If *h(x)*, for some key *x*, points to a location that is already occupied, inspect the next location in the array. If that location is full, try the one after that, and son on, until we find a vacant location or find that the array (hash table) is completely full.

**There are a couple of problems though:**
1. If all the values in the table are filled we may have to wrap back to the beginning of the table.
2. Another is called clustering, in which keys form clusters when they hash to the same/nearly the same value.

#### Open Hashing ####
Another way to resolve the collision/clustering problem is to use **Open Hashing** (also known as chaining). We ignore the collision and simply place the value in the chain. So we are effectively using a **Linked List** to avoid the conflict.

This works pretty well in that the lookup will be *O*(1)!


## Loading Factor ##
*Loading Factor* is approximated by the number of

    values occupied/total cells

The best load factor for a hash table is ~0.1 or 10%

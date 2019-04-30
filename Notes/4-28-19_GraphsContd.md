# Graphs in Problem Solving #

Often a problem can be represented as a graph. The solution to the problem is obtained by solving a problem on the corresponding graph.

## Undirected State Graph ##

A simple game using three coins. At the start of the game, the middle coin is "tails" and the other two are "heads." The goal of the game is to change the configuration so that the outer coins are "tails" and the middle coin is "heads."

**Rules:**
1. You may flip the middle coin whenever you want
2. You may flip one of the end coins only if the other two coins are the same as each other
3. You may not change the coins in any other way (shuffling them around, etc)


_Solution As Graph:_

                   HTH
                    |
                   HHH
                 /     \
              THH       HHT
              TTH       HTT
                 \     /
                   TTT
                    |
                   THT


## Graph Traversals ##
Graph vertices don't have children like tree nodes, so typical tree traversal algorithms are not generally applicable to graphs.

**2 Common Ways to Traverse Graphs:**
1. _**Breadth-First Search**_ uses a queue to keep track of vertices that still need to be visited.

2. _**Depth-First Search**_ uses a stack to keep track of vertices. It can also be implememnted recursively so that it does not explicitly use a stack of vertices.

Traversal algorithms must be careful that they don't enter a repeptitive cycle (eg to neighbor and back again). It is necessary to mark each vertex as it is processed.

The progress of a traversal after the start vertex depends on the traversal method that is used.

To design and implement search (traversal) algorithms, a programmer must be able to analyze and predict their behavior.

**Questions that need to be answered:**
1. Is the algorithm guaranteed to find a solution?

2. Will the algorithm terminate, or can it get stuck in an infinite loop?

3. When a solution is found, is it guaranteed to be optimal?

4. What is the complexity of the search process in terms of time usage? Memory usage?

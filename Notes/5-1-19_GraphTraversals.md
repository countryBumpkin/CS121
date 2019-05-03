# Graph Traversals #
* Breadth First Search
* Depth First Search

## Depth First Search ##
A traversal that only processes those vertices that can be reached from the start vertex.

The traversal proceeds as far as possible before it backs up.

Vertices that can be visited are pushed onto the stack to keep track of where we can go. Then we visit each vertice on the stack to find the value we are searching for.

## Breadth First Search ##
A breadth first search uses a queue to keep track of which vertices might still have unprocessed neighbors. The search begins with a starting vertex, which is processed, marked, and placed in the queue. After this, the queue is processed repeatedly using the following algorithm:

  1. Remove a vertex, v, from the front of the the queue

  2. For each unmarked neighbor u, or v:
      * Process u, mark v, then place u in the queue since u may still have further unprocessed neighbors

  3. Check the vertex to see if it is our goal either before enqueue/push or when dequeueing/popping



## Differences Between BFS and DFS ##
* BFS is guaranteed to find a path with the fewest steps
* DFS has a chance of finding a solution before BFS
* DFS may get lost in an infinite loop while BFS won't


pullman baptismal
2 ppl
drop hitch in pullman truck


setup at 1:30 geoff garrett jared
normal setup at 2:30 - 3:00

# Graphs #

## Graph Vocabulary ##

_**Adajacent**_
    Vertices are adjacent if in a pair.

_**Path**_
    A sequence of edges that begin at one vertex and end at another vertex

_**Simple path**_
    May not pass through same vertex twice

_**Cycle**_
    A path that begins and ends at the same vertex and does not pass through the same vertex twice

_**Rooted Graph**_
    Has a unique node, the root, such that there is a path from the root to all nodes within the graph

_**Free Tree**_
    Connected, undirected graph with no cycles. Trees cannot have cycles.

_**Adjacency Matrix**_
    An adjacency matrix is a square grid of true/false values that represent the edges of a graph. If the graph contains n vertices, then the grid contains n rows and n columns


## Edge Lists ##
  A series of linked lists showing which nodes the root node is connected to.

    A -> B -> C -> D

## Pair Lists ##
  I wasn't paying close attention to the lecture but I think edges can also be stored as pairs of points.

    (A,B), (B,C), etc

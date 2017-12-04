# Graphs

Similar structure to a tree. Whereas a tree cannot have connections between nodes on the same level, a graph can. A connection can be made between ANY TWO NODES in a graph. This is a key difference between a tree and a graph.

Graph consists of two main **sets** or lists, the Verticies and the Edges (G(v, e))
- Verticies: Each node in the graph
- Edges: lines between verticies. 

Verticies are a list with the structure of each node.
ie: {A, B, C}
Edges are a list of ordered pairs which denote a connection between nodes
ie: {(A, B), (B, C), (A, C)}

In this graph, there are three verticies and three edges.
The nodes A and B are connected, B and C are connected, and A and C are connected. The shape created is a triangle connecting these three nodes


### Directed Graphs (DGraph)
Because some graphs require a edge **direction**, the ordering of the verticies in an edge pair is IMPORTANT. If you create your edges in the order (u, v), you CANNOT WRITE THEM AS (v, u) because that is DIFFERENT

(u, v) is FROM u TO v (ie, u--->v)
(v, u) is FROM v to u (ie. v--->u)


### Weight
Edges can contain data. An important aspect of an edge can be it's **weight** or **cost**. This is used to find the maximum or minimum total cost to traverse between verticies in the graph. A graph that includes weight is considered a **weighted graph** (or weighted directed graph, etc)

ie: if the edge weight from A->B is 50, and the edge weight from A->C->B is 40 total, it may be **faster** or **cheaper** to traverse from A to B via C, instead of directly from A to B.


### Pathes
The path in a graph is a list of verticies needed to traverse from a **source** to a **destination**. The first type of path is a **simple path**

ie. given the direction graph v={A, B, C, D} and e={(A, B), (A, D), (B, D), (D,B), (D,C)}, find the shortest path from A to C

Since A and D are connected, and D and C are connected, we can traverse via A->D->C to reach our destination. We can also traverse from A->B->D->C, but this is not as short. 

In the above example, if there is another edge between C->A, then your destination is directly connected to the source (but not vice versa), then you have a **cylical path**. The cylilic path can be written as A->D->C->A (note the added A at the end, this is the only change from above)


### Strongly Connected Graph
There is a **PATH** between each two verticies in the graph:w

### Complete Graph
There is an **EDGE** between two verticies in the graph
A complete graph is ALWAYS strongly connected, but not always vice versa


### Representation of a Graph
1. Adjacency Matrix
2.  
3.

#### Adjacency Matrix
A 2-Dimensional Array consisting of the rows and columns equal to the number of verticies
The rows and columns represent all possible combinations of verticies (both forward and backward). A true/false value is placed in each cubby, true representing a connection between two verticies in the stated direction (ie Array[B][D] == True, then B->D), false representing a lack of a connection.

This is a DIRECTIONAL graph

### Adjecency List
An array consisting of each vertex (as an index), where each item is a list of it's edges
If a vertex has no outward facing edges, make sure to include it as an index and use NULL or something similar



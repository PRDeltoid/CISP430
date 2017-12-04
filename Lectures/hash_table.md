# Hash Tables

Collision Problem:
Used when two pieces of data create the same hash.
This can be solved using a chaining structure and open addressing

### Open Addressing
Linear probing a simple open-addressing hashing strategy
- To insert an element x, compute hash(x) and try to place x at that position
- If an element is in that position, move to the next position and try to place there
- Keep moving until an open position is found or we have wrapped around the list
- If an open position is found, place x there.

To look up the element, the array is scanned in the same sequence until either the target element is found, or an open slot is encountered.

If an open slot is encountered, the element does not exist in the hash table.

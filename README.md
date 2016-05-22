# Binary-Tree-Traversals
The code file illustrates three ways (in-order, pre-order, post-order) of tree traversals for a binary tree. 

###Input Format:
* 1st line: number of vertices n
* Next n lines: each of n lines contains three integers `key_i,left_i, right_i` where i is the index of the vertices (0,...,n-1). And root is vertex 0. `left_i` is the index of left child. `right_i` is the index of right child. If vertex i does not have left or right child, the corresponding `left_i` or `right_i` will be -1.

###Output:
* 1st line: in-order tree traversal
* 2nd line: pre-order tree traversal
* 3rd line: post-order tree traversal


###Example:
Input:
```
5
4 1 2
2 3 4
5 -1 -1
1 -1 -1
3 -1 -1
```
Output:
```
1 2 3 4 5
4 2 1 3 5
1 3 2 5 4
```
Note: This tree:
```
        4
     /     \
   2         5
 /   \    
1     3
```

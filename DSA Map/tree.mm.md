

# Tree
## ==Types of Tree==
- Binary Tree
  - maximum 1 0 2 subtree 
  1. Full binary tree  (either 2 children or 0 children)
  2. Complete binary tree  
  3. Perfect binary tree (ALL level has 2^n children , n = level)
  4. Degenerate tree

- *==Binary Search Tree==*
  - Rules of BST 
    - left subtree  value less than node value
    - right subtree greater  than node value
  - Operations 
    - Insert in Binary search tree. tc =(O logn)
    - Search in Binary Search tree. tc = (O logn)
    - Find  ==min== and ==max== in Binary Search tree
    - check is Valid Bst 
    - Sum of the Node  
    - Delete in Binary Search tree
- Balanced binary tree
    - Avl Tree 
      - type of self balancing binary search tree
      - must be  satisfied the bst tree condition
      - The balance factor can be -1, 0, or +1 
      - balance factor = height of left subtree - height of right subtree
      - Rotation
        - LL Rotation
        - RR Rotation
        - LR Rotation
        - RL Rotation


    - Red Black Tree 
      - Node Color : 🚀 Either RED OR BLACK 
      - Root Node is always BLACK
      - Red Node can have only BLACK children
      - Every path from root to leaf has same number of BLACK nodes
      - No two RED nodes can be adjacent
      - Leaf node is always BLACK
- B Tree
  - Applications of B Tree
    1. Database
    2. File System
    3. operating system
    4. Network Routing
    5. Caching
    6. Compiler Design
- B+ Tree
- Trie
  - Applications of Trie
  1. Dictionary
  2. Autocomplete
  3. Spelling Checker
- Segment Tree
  - Applications of Segment Tree 
    1. Range Sum Query
    2. Range Minimum Query
    3, Lazy Propagation 
    4. Range Update Query
    5. Internal Problems 
- Heap Tree 
- Generic Tree (N-ary tree)
- ==Expression Tree== 
  leaf node are operands and non leaf node are operators
## Terminology of Tree
- Node
- Root Node  ==(Parent Node)== 
- Child Node
- Edge
- Sibling
- Leaf Node 
- Ancestor
- Descendant
- Internal Node
- Degree of Node
- Degree of Tree
- Terminal Node
- Non Terminal Node(Internal Node)
- Level of Node
- Path 
- Forest
## Representation of a Tree
- [Tree representation](https://media.geeksforgeeks.org/wp-content/uploads/20240424125622/Introduction-to-tree-.webp)
- [Structure of the tree Node ]()

## Traversal of Tree using recursive 
- InOrder Traversal
- PreOrder Traversal
- PostOrder Traversal
- Level Order Traversal
- Traversal of Tree using iterative traversal

## Operations on Binary Tree 
- Insertion
  1. Insert Node at left and right of the tree
- size of tree 
- Maximum of the tree 
- Height of the tree 
- Minimum of the tree
- Search in Binary Tree using recursion 
- print all the internal nodes of the tree
- Find the minimum and maximum height of the tree
- Print the tree node data using level order traversal ( uses queue Ds)
- find the diameter of the binary tree 
- print  reverse level order tree traversal using queue  and stack Ds
- Delete an element from the tree
## Application of tree  Data structure in Real world 
- File System
- HTML DOM
- Network Routing
- AI
- Fold
- JSON
- XML
- SQL
- Database


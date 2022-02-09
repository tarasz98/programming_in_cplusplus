#ifndef __fibonacci_tree__
#define __fibonacci_tree__

// ------CLASS DECLARATION

class FibonacciTree {
public:
    // Constructor for the leaves
    FibonacciTree(unsigned int value); // The constructor is the one who uilds the tree itself

    ~FibonacciTree(); // Destructor

    unsigned int size();   // Size of the tree
    unsigned int depth(); // Height of the tree
    unsigned int leafs(); // Number of leaves/constants in the tree
    void traversePre();    // Print nodes in pre-order (prefix notation)

private:
    unsigned int value;
    FibonacciTree *left;
    FibonacciTree *right;
};

#endif //__fibonacci_tree__
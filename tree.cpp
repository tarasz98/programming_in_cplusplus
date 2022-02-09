#include <iostream>
#include <cmath>
#include "fibonacci_tree.h"

using namespace std;

// Function to insert the fibonacci result of each node

unsigned int F(unsigned int n){
    if(n == 0){
        //cout << "Reached base of the recursion for value 0." <<endl;
        return 1;
    }else if(n == 1){
        //cout << "Reached base of the recursion for value 1." <<endl;
        return 1;        
    }else{
        //cout <<"Computation of the fibonacci of "<< n <<endl;
        return (F(n-1) + F(n-2));
    }

}


// -----METHOD IMPLEMENTATION-------

// Building the tree

FibonacciTree::FibonacciTree(unsigned int n){
    if (n == 0 || n == 1){ 
        this->value = 1;
        this->left = nullptr;
        this->right = nullptr;

    } else {
        this->value = F(n);
        this->left = new FibonacciTree(n-1);
        this->right = new FibonacciTree(n-2);
    }
}

// Size

unsigned int FibonacciTree::size(){
    if (value == 1){
        return 1;
    } else {
        return 1 + this->left->size() + this->right->size();
    }
}


// Depth

unsigned int FibonacciTree::depth(){
    if (value == 1){
        return 1;
    } else {
        return 1 + max(this->left->depth(), this->right->depth());
    
    }
}


// Leaves

unsigned int FibonacciTree::leafs(){
    if (value == 1){
        return 1;
    } else {
        return this->left->leafs() + this->right->leafs();
    }
}


// Traverse

void FibonacciTree::traversePre(){
    cout <<" " << this->value;

    if (this->left != nullptr){
        this->left->traversePre();
    }

    if (this->right != nullptr){
        this->right->traversePre();
    }

}

// Destructor 

FibonacciTree::~FibonacciTree(){
    // cout << "Destroying: " << this->value <<endl;

    if (this->left != nullptr){
        delete this->left;
    }

    if (this->right != nullptr){
        delete this->right;
    }
}


